// Generated by gencpp from file eufs_msgs/ChassisState.msg
// DO NOT EDIT!


#ifndef EUFS_MSGS_MESSAGE_CHASSISSTATE_H
#define EUFS_MSGS_MESSAGE_CHASSISSTATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace eufs_msgs
{
template <class ContainerAllocator>
struct ChassisState_
{
  typedef ChassisState_<ContainerAllocator> Type;

  ChassisState_()
    : header()
    , throttle_relay_enabled(false)
    , autonomous_enabled(false)
    , runstop_motion_enabled(false)
    , steering_commander()
    , steering(0.0)
    , throttle_commander()
    , throttle(0.0)
    , front_brake_commander()
    , front_brake(0.0)  {
    }
  ChassisState_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , throttle_relay_enabled(false)
    , autonomous_enabled(false)
    , runstop_motion_enabled(false)
    , steering_commander(_alloc)
    , steering(0.0)
    , throttle_commander(_alloc)
    , throttle(0.0)
    , front_brake_commander(_alloc)
    , front_brake(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _throttle_relay_enabled_type;
  _throttle_relay_enabled_type throttle_relay_enabled;

   typedef uint8_t _autonomous_enabled_type;
  _autonomous_enabled_type autonomous_enabled;

   typedef uint8_t _runstop_motion_enabled_type;
  _runstop_motion_enabled_type runstop_motion_enabled;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _steering_commander_type;
  _steering_commander_type steering_commander;

   typedef double _steering_type;
  _steering_type steering;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _throttle_commander_type;
  _throttle_commander_type throttle_commander;

   typedef double _throttle_type;
  _throttle_type throttle;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _front_brake_commander_type;
  _front_brake_commander_type front_brake_commander;

   typedef double _front_brake_type;
  _front_brake_type front_brake;





  typedef boost::shared_ptr< ::eufs_msgs::ChassisState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::eufs_msgs::ChassisState_<ContainerAllocator> const> ConstPtr;

}; // struct ChassisState_

typedef ::eufs_msgs::ChassisState_<std::allocator<void> > ChassisState;

typedef boost::shared_ptr< ::eufs_msgs::ChassisState > ChassisStatePtr;
typedef boost::shared_ptr< ::eufs_msgs::ChassisState const> ChassisStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::eufs_msgs::ChassisState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::eufs_msgs::ChassisState_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::eufs_msgs::ChassisState_<ContainerAllocator1> & lhs, const ::eufs_msgs::ChassisState_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.throttle_relay_enabled == rhs.throttle_relay_enabled &&
    lhs.autonomous_enabled == rhs.autonomous_enabled &&
    lhs.runstop_motion_enabled == rhs.runstop_motion_enabled &&
    lhs.steering_commander == rhs.steering_commander &&
    lhs.steering == rhs.steering &&
    lhs.throttle_commander == rhs.throttle_commander &&
    lhs.throttle == rhs.throttle &&
    lhs.front_brake_commander == rhs.front_brake_commander &&
    lhs.front_brake == rhs.front_brake;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::eufs_msgs::ChassisState_<ContainerAllocator1> & lhs, const ::eufs_msgs::ChassisState_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace eufs_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::eufs_msgs::ChassisState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::eufs_msgs::ChassisState_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::eufs_msgs::ChassisState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::eufs_msgs::ChassisState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::eufs_msgs::ChassisState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::eufs_msgs::ChassisState_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::eufs_msgs::ChassisState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "94f504003a2d58582928e8e48a2519db";
  }

  static const char* value(const ::eufs_msgs::ChassisState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x94f504003a2d5858ULL;
  static const uint64_t static_value2 = 0x2928e8e48a2519dbULL;
};

template<class ContainerAllocator>
struct DataType< ::eufs_msgs::ChassisState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "eufs_msgs/ChassisState";
  }

  static const char* value(const ::eufs_msgs::ChassisState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::eufs_msgs::ChassisState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"\n"
"bool throttle_relay_enabled\n"
"bool autonomous_enabled\n"
"bool runstop_motion_enabled\n"
"\n"
"string steering_commander\n"
"float64 steering\n"
"\n"
"string throttle_commander\n"
"float64 throttle\n"
"\n"
"string front_brake_commander\n"
"float64 front_brake\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::eufs_msgs::ChassisState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::eufs_msgs::ChassisState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.throttle_relay_enabled);
      stream.next(m.autonomous_enabled);
      stream.next(m.runstop_motion_enabled);
      stream.next(m.steering_commander);
      stream.next(m.steering);
      stream.next(m.throttle_commander);
      stream.next(m.throttle);
      stream.next(m.front_brake_commander);
      stream.next(m.front_brake);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ChassisState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::eufs_msgs::ChassisState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::eufs_msgs::ChassisState_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "throttle_relay_enabled: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.throttle_relay_enabled);
    s << indent << "autonomous_enabled: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.autonomous_enabled);
    s << indent << "runstop_motion_enabled: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.runstop_motion_enabled);
    s << indent << "steering_commander: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.steering_commander);
    s << indent << "steering: ";
    Printer<double>::stream(s, indent + "  ", v.steering);
    s << indent << "throttle_commander: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.throttle_commander);
    s << indent << "throttle: ";
    Printer<double>::stream(s, indent + "  ", v.throttle);
    s << indent << "front_brake_commander: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.front_brake_commander);
    s << indent << "front_brake: ";
    Printer<double>::stream(s, indent + "  ", v.front_brake);
  }
};

} // namespace message_operations
} // namespace ros

#endif // EUFS_MSGS_MESSAGE_CHASSISSTATE_H