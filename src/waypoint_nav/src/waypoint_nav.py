#!/usr/bin/env python

# Import libraries:
import rospy
import math
from geometry_msgs.msg import Pose,Twist,Point32
from sensor_msgs.msg import NavSatFix
from novatel_gps_msgs.msg import Inspva
from std_msgs.msg import Float32
from utilities import Point, DiffDriverVehicle, NavController
import transforms3d as tf
import numpy as np
import os
import rospkg
import utm

rospack = rospkg.RosPack()

### Define constants:
pi = np.pi

# Define global variables:
global currentPos
currentPos = Point32()
global file_name
# file_name = rospy.get_param("/file_name")
file_name = "/home/turtle1/turtle_drive/src/waypoint_nav/src/test_waypoints.txt"
# Callback function for subscriber to Position and orientation topic:

def pose_callback(data):

    global currentPos

    # rospy.loginfo(rospy.get_caller_id(), data.data)
    x = data.latitude
    y = data.longitude
    iniY,iniX, zoneNum , char = utm.from_latlon(x,y)
    currentPos.x = iniX
    currentPos.y = iniY

def heading_callback(data):
    global currentPos

    currentPos.z =  data.azimuth

# 1. Initialize function definition:
def initialize():

    global file_name
    # Create objects for AckermannVehicle and Pure Pursuit controller:
    length = 1
    maxVel = 2
    mule = DiffDriverVehicle(length,maxVel)
    cntrl = NavController(length, maxVel)

    cntrl.initialize(os.path.join(rospack.get_path("waypoint_nav"),"src",file_name))

    return cntrl


# 2. Execute function definition:
def execute(cntrl):

    global currentPos
    distance2Goal = 0
    heading_err_init = 0
    heading_err_goal = 0
    cmd_vel = Twist()
    cmd_vel.angular.x = 0;
    cmd_vel.angular.y = 0;
    cmd_vel.linear.y = 0
    cmd_vel.linear.z = 0

    k_p_heading_init = 0.01
    k_i_heading_init = 0
    k_d_heading_init = 0.001
    k_heading_init_low = 0.01
    k_heading_goal = 0.01
    k_dist = 0.5

    # Setup the ROS publishers and subscribers:
    rospy.Subscriber("/fix", NavSatFix, pose_callback)
    rospy.Subscriber("/inspva", Inspva, heading_callback)
    pub_goal = rospy.Publisher('/current_goal',Point32,queue_size=10)
    pub_vel = rospy.Publisher('turtle_velocity_controller/cmd_vel', Twist,queue_size=10)
    rospy.init_node('waypoint_ctlr', anonymous=False)

    rate = rospy.Rate(10)

    # Initialize:
    # 1. Parameters:
    euclideanError = 0
    prev_heading_err_init = 0
    heading_err_init_sum = 0
    heading_err_init_diff = 0

    # 2. Goal:
    goal = cntrl.wpList[cntrl.currWpIdx]

    # stationaryCommand.x = 0
    # stationaryCommand.y = 0

    # Loop through as long as the node is not shutdown:
    while not rospy.is_shutdown():

        # Compute the new Euclidean error:
        current_goal = Point32(goal.x,goal.y,goal.heading)
        print('current Index: ',cntrl.currWpIdx)
        pub_goal.publish(current_goal)

        # Case #1:Vehicle is in the vicinity of current goal point (waypoint):
        if (abs(distance2Goal) < 1):
            # calculate theta_des_1
            heading_err_goal = currentPos.z - current_goal.z
            if abs(heading_err_goal) < 5:
                print (" Reached Waypoint # ", cntrl.currWpIdx +1)
                # Update goal Point to next point in the waypoint list:
                cntrl.currWpIdx +=1
            else:
                cmd_vel.angular.z = k_heading_goal*heading_err_goal;
                print('distance less than threshold, working on heading error')



            if cntrl.currWpIdx < cntrl.nPts:
                goal = cntrl.wpList[cntrl.currWpIdx]
            else:
                print (" --- All Waypoints have been conquered! Mission Accomplished Mr Hunt !!! --- ")
                break


            # print (" New goal is: ")
            # print (goal.x)
            # print (goal.y)
            # print (goal.heading)
        else:
            if abs(heading_err_init) > 50:
                print('Far from waypoint. Working on initial heading')
                print(heading_err_init)
                cmd_vel.angular.z = k_p_heading_init*heading_err_init + k_i_heading_init*heading_err_init_sum + k_d_heading_init*heading_err_init_diff
                cmd_vel.linear.x = 0;
            else:
                print(currentPos.x)
                print(currentPos.y)
                print('initial heading adjusted. Going to waypoint.')
                cmd_vel.angular.z = 0 #k_heading_init_low*heading_err_init;
                cmd_vel.linear.x = k_dist*distance2Goal;

        # Case #2:
        #Compute the error between the goal and current
        heading_err_init, distance2Goal = cntrl.compute_err(currentPos, goal)
        heading_err_init_sum = heading_err_init + prev_heading_err_init
        heading_err_init_diff = -heading_err_init + prev_heading_err_init
        prev_heading_err_init = heading_err_init

        # Publish the computed command:
        pub_vel.publish(cmd_vel)

        rate.sleep()

    rospy.spin()

if __name__ == '__main__':

    # Step 1: Initialize the Controller by reading in the list of waypoints:
    cntrl = initialize()

    # Step 2: Execute the controller in a closed loop manner
    execute(cntrl)
