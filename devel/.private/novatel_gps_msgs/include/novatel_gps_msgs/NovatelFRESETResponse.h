// Generated by gencpp from file novatel_gps_msgs/NovatelFRESETResponse.msg
// DO NOT EDIT!


#ifndef NOVATEL_GPS_MSGS_MESSAGE_NOVATELFRESETRESPONSE_H
#define NOVATEL_GPS_MSGS_MESSAGE_NOVATELFRESETRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace novatel_gps_msgs
{
template <class ContainerAllocator>
struct NovatelFRESETResponse_
{
  typedef NovatelFRESETResponse_<ContainerAllocator> Type;

  NovatelFRESETResponse_()
    : success(false)  {
    }
  NovatelFRESETResponse_(const ContainerAllocator& _alloc)
    : success(false)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;





  typedef boost::shared_ptr< ::novatel_gps_msgs::NovatelFRESETResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::novatel_gps_msgs::NovatelFRESETResponse_<ContainerAllocator> const> ConstPtr;

}; // struct NovatelFRESETResponse_

typedef ::novatel_gps_msgs::NovatelFRESETResponse_<std::allocator<void> > NovatelFRESETResponse;

typedef boost::shared_ptr< ::novatel_gps_msgs::NovatelFRESETResponse > NovatelFRESETResponsePtr;
typedef boost::shared_ptr< ::novatel_gps_msgs::NovatelFRESETResponse const> NovatelFRESETResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::novatel_gps_msgs::NovatelFRESETResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::novatel_gps_msgs::NovatelFRESETResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace novatel_gps_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'novatel_gps_msgs': ['/home/sena/turtle_drive/src/novatel_gps_driver/novatel_gps_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::novatel_gps_msgs::NovatelFRESETResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::novatel_gps_msgs::NovatelFRESETResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::novatel_gps_msgs::NovatelFRESETResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::novatel_gps_msgs::NovatelFRESETResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::novatel_gps_msgs::NovatelFRESETResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::novatel_gps_msgs::NovatelFRESETResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::novatel_gps_msgs::NovatelFRESETResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const ::novatel_gps_msgs::NovatelFRESETResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x358e233cde0c8a8bULL;
  static const uint64_t static_value2 = 0xcfea4ce193f8fc15ULL;
};

template<class ContainerAllocator>
struct DataType< ::novatel_gps_msgs::NovatelFRESETResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "novatel_gps_msgs/NovatelFRESETResponse";
  }

  static const char* value(const ::novatel_gps_msgs::NovatelFRESETResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::novatel_gps_msgs::NovatelFRESETResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
bool success\n\
\n\
\n\
";
  }

  static const char* value(const ::novatel_gps_msgs::NovatelFRESETResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::novatel_gps_msgs::NovatelFRESETResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct NovatelFRESETResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::novatel_gps_msgs::NovatelFRESETResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::novatel_gps_msgs::NovatelFRESETResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NOVATEL_GPS_MSGS_MESSAGE_NOVATELFRESETRESPONSE_H
