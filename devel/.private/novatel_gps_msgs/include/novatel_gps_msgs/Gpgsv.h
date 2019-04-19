// Generated by gencpp from file novatel_gps_msgs/Gpgsv.msg
// DO NOT EDIT!


#ifndef NOVATEL_GPS_MSGS_MESSAGE_GPGSV_H
#define NOVATEL_GPS_MSGS_MESSAGE_GPGSV_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <novatel_gps_msgs/Satellite.h>

namespace novatel_gps_msgs
{
template <class ContainerAllocator>
struct Gpgsv_
{
  typedef Gpgsv_<ContainerAllocator> Type;

  Gpgsv_()
    : header()
    , message_id()
    , n_msgs(0)
    , msg_number(0)
    , n_satellites(0)
    , satellites()  {
    }
  Gpgsv_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , message_id(_alloc)
    , n_msgs(0)
    , msg_number(0)
    , n_satellites(0)
    , satellites(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _message_id_type;
  _message_id_type message_id;

   typedef uint8_t _n_msgs_type;
  _n_msgs_type n_msgs;

   typedef uint8_t _msg_number_type;
  _msg_number_type msg_number;

   typedef uint8_t _n_satellites_type;
  _n_satellites_type n_satellites;

   typedef std::vector< ::novatel_gps_msgs::Satellite_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::novatel_gps_msgs::Satellite_<ContainerAllocator> >::other >  _satellites_type;
  _satellites_type satellites;





  typedef boost::shared_ptr< ::novatel_gps_msgs::Gpgsv_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::novatel_gps_msgs::Gpgsv_<ContainerAllocator> const> ConstPtr;

}; // struct Gpgsv_

typedef ::novatel_gps_msgs::Gpgsv_<std::allocator<void> > Gpgsv;

typedef boost::shared_ptr< ::novatel_gps_msgs::Gpgsv > GpgsvPtr;
typedef boost::shared_ptr< ::novatel_gps_msgs::Gpgsv const> GpgsvConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::novatel_gps_msgs::Gpgsv_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::novatel_gps_msgs::Gpgsv_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace novatel_gps_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'novatel_gps_msgs': ['/home/trex/turtle_drive/src/novatel_gps_driver/novatel_gps_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::novatel_gps_msgs::Gpgsv_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::novatel_gps_msgs::Gpgsv_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::novatel_gps_msgs::Gpgsv_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::novatel_gps_msgs::Gpgsv_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::novatel_gps_msgs::Gpgsv_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::novatel_gps_msgs::Gpgsv_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::novatel_gps_msgs::Gpgsv_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6f34bebc32fe085313c942a96fd39c77";
  }

  static const char* value(const ::novatel_gps_msgs::Gpgsv_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6f34bebc32fe0853ULL;
  static const uint64_t static_value2 = 0x13c942a96fd39c77ULL;
};

template<class ContainerAllocator>
struct DataType< ::novatel_gps_msgs::Gpgsv_<ContainerAllocator> >
{
  static const char* value()
  {
    return "novatel_gps_msgs/Gpgsv";
  }

  static const char* value(const ::novatel_gps_msgs::Gpgsv_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::novatel_gps_msgs::Gpgsv_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Total number of satellites in view and data about satellites\n\
# Because the NMEA sentence is limited to 4 satellites per message, several\n\
# of these messages may need to be synthesized to get data about all visible\n\
# satellites.\n\
\n\
Header header\n\
\n\
string message_id\n\
\n\
# Number of messages in this sequence\n\
uint8 n_msgs\n\
# This messages number in its sequence. The first message is number 1.\n\
uint8 msg_number\n\
\n\
# Number of satellites currently visible\n\
uint8 n_satellites\n\
\n\
# Up to 4 satellites are described in each message\n\
Satellite[] satellites\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: novatel_gps_msgs/Satellite\n\
# Satellite data structure used in GPGSV messages\n\
\n\
# PRN number of the satellite\n\
# GPS = 1..32\n\
# SBAS = 33..64\n\
# GLO = 65..96\n\
uint8 prn\n\
\n\
# Elevation, degrees. Maximum 90\n\
uint8 elevation\n\
\n\
# Azimuth, True North degrees. [0, 359]\n\
uint16 azimuth\n\
\n\
# Signal to noise ratio, 0-99 dB. -1 when null in NMEA sentence (not tracking)\n\
int8 snr\n\
";
  }

  static const char* value(const ::novatel_gps_msgs::Gpgsv_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::novatel_gps_msgs::Gpgsv_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.message_id);
      stream.next(m.n_msgs);
      stream.next(m.msg_number);
      stream.next(m.n_satellites);
      stream.next(m.satellites);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Gpgsv_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::novatel_gps_msgs::Gpgsv_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::novatel_gps_msgs::Gpgsv_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "message_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.message_id);
    s << indent << "n_msgs: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.n_msgs);
    s << indent << "msg_number: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.msg_number);
    s << indent << "n_satellites: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.n_satellites);
    s << indent << "satellites[]" << std::endl;
    for (size_t i = 0; i < v.satellites.size(); ++i)
    {
      s << indent << "  satellites[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::novatel_gps_msgs::Satellite_<ContainerAllocator> >::stream(s, indent + "    ", v.satellites[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // NOVATEL_GPS_MSGS_MESSAGE_GPGSV_H
