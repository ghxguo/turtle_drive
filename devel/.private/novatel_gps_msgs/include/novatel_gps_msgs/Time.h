// Generated by gencpp from file novatel_gps_msgs/Time.msg
// DO NOT EDIT!


#ifndef NOVATEL_GPS_MSGS_MESSAGE_TIME_H
#define NOVATEL_GPS_MSGS_MESSAGE_TIME_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace novatel_gps_msgs
{
template <class ContainerAllocator>
struct Time_
{
  typedef Time_<ContainerAllocator> Type;

  Time_()
    : header()
    , clock_status()
    , offset(0.0)
    , offset_std(0.0)
    , utc_offset(0.0)
    , utc_year(0)
    , utc_month(0)
    , utc_day(0)
    , utc_hour(0)
    , utc_minute(0)
    , utc_millisecond(0)
    , utc_status()  {
    }
  Time_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , clock_status(_alloc)
    , offset(0.0)
    , offset_std(0.0)
    , utc_offset(0.0)
    , utc_year(0)
    , utc_month(0)
    , utc_day(0)
    , utc_hour(0)
    , utc_minute(0)
    , utc_millisecond(0)
    , utc_status(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _clock_status_type;
  _clock_status_type clock_status;

   typedef double _offset_type;
  _offset_type offset;

   typedef double _offset_std_type;
  _offset_std_type offset_std;

   typedef double _utc_offset_type;
  _utc_offset_type utc_offset;

   typedef uint32_t _utc_year_type;
  _utc_year_type utc_year;

   typedef uint8_t _utc_month_type;
  _utc_month_type utc_month;

   typedef uint8_t _utc_day_type;
  _utc_day_type utc_day;

   typedef uint8_t _utc_hour_type;
  _utc_hour_type utc_hour;

   typedef uint8_t _utc_minute_type;
  _utc_minute_type utc_minute;

   typedef uint32_t _utc_millisecond_type;
  _utc_millisecond_type utc_millisecond;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _utc_status_type;
  _utc_status_type utc_status;





  typedef boost::shared_ptr< ::novatel_gps_msgs::Time_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::novatel_gps_msgs::Time_<ContainerAllocator> const> ConstPtr;

}; // struct Time_

typedef ::novatel_gps_msgs::Time_<std::allocator<void> > Time;

typedef boost::shared_ptr< ::novatel_gps_msgs::Time > TimePtr;
typedef boost::shared_ptr< ::novatel_gps_msgs::Time const> TimeConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::novatel_gps_msgs::Time_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::novatel_gps_msgs::Time_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::novatel_gps_msgs::Time_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::novatel_gps_msgs::Time_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::novatel_gps_msgs::Time_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::novatel_gps_msgs::Time_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::novatel_gps_msgs::Time_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::novatel_gps_msgs::Time_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::novatel_gps_msgs::Time_<ContainerAllocator> >
{
  static const char* value()
  {
    return "65d339585d71de8242304ff93e8a4f1a";
  }

  static const char* value(const ::novatel_gps_msgs::Time_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x65d339585d71de82ULL;
  static const uint64_t static_value2 = 0x42304ff93e8a4f1aULL;
};

template<class ContainerAllocator>
struct DataType< ::novatel_gps_msgs::Time_<ContainerAllocator> >
{
  static const char* value()
  {
    return "novatel_gps_msgs/Time";
  }

  static const char* value(const ::novatel_gps_msgs::Time_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::novatel_gps_msgs::Time_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Parsed Best Position or Omnistar XP or HP pos data from Novatel OEM6 receiver\n\
Header header\n\
\n\
# Clock model status\n\
# see Table 65 on pg 322 of the OEM6 Family Firmware Reference Manual, Rev3\n\
string clock_status\n\
\n\
# Receiver clock offset, in seconds, from GPS reference time. A positive offset\n\
# implies that the receiver clock is ahead of GPS reference time. To derive\n\
# GPS reference time, use the following formula:\n\
# GPS reference time = receiver time - offset\n\
float64 offset\n\
\n\
# Standard deviation of the offset\n\
float64 offset_std\n\
\n\
# The offset of the GPS reference time from UTC time, computed using almanac\n\
# parameters. UTC time is GPS reference time plus the current UTC offset plus\n\
# the receiver clock offset:\n\
# UTC time = GPS reference time + offset + UTC offset\n\
float64 utc_offset\n\
\n\
uint32 utc_year\n\
uint8 utc_month\n\
uint8 utc_day\n\
uint8 utc_hour\n\
uint8 utc_minute\n\
uint32 utc_millisecond\n\
\n\
string utc_status\n\
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
";
  }

  static const char* value(const ::novatel_gps_msgs::Time_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::novatel_gps_msgs::Time_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.clock_status);
      stream.next(m.offset);
      stream.next(m.offset_std);
      stream.next(m.utc_offset);
      stream.next(m.utc_year);
      stream.next(m.utc_month);
      stream.next(m.utc_day);
      stream.next(m.utc_hour);
      stream.next(m.utc_minute);
      stream.next(m.utc_millisecond);
      stream.next(m.utc_status);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Time_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::novatel_gps_msgs::Time_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::novatel_gps_msgs::Time_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "clock_status: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.clock_status);
    s << indent << "offset: ";
    Printer<double>::stream(s, indent + "  ", v.offset);
    s << indent << "offset_std: ";
    Printer<double>::stream(s, indent + "  ", v.offset_std);
    s << indent << "utc_offset: ";
    Printer<double>::stream(s, indent + "  ", v.utc_offset);
    s << indent << "utc_year: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.utc_year);
    s << indent << "utc_month: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.utc_month);
    s << indent << "utc_day: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.utc_day);
    s << indent << "utc_hour: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.utc_hour);
    s << indent << "utc_minute: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.utc_minute);
    s << indent << "utc_millisecond: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.utc_millisecond);
    s << indent << "utc_status: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.utc_status);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NOVATEL_GPS_MSGS_MESSAGE_TIME_H
