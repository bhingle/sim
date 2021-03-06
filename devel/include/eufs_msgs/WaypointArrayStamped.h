// Generated by gencpp from file eufs_msgs/WaypointArrayStamped.msg
// DO NOT EDIT!


#ifndef EUFS_MSGS_MESSAGE_WAYPOINTARRAYSTAMPED_H
#define EUFS_MSGS_MESSAGE_WAYPOINTARRAYSTAMPED_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <eufs_msgs/Waypoint.h>

namespace eufs_msgs
{
template <class ContainerAllocator>
struct WaypointArrayStamped_
{
  typedef WaypointArrayStamped_<ContainerAllocator> Type;

  WaypointArrayStamped_()
    : header()
    , waypoints()  {
    }
  WaypointArrayStamped_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , waypoints(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::eufs_msgs::Waypoint_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::eufs_msgs::Waypoint_<ContainerAllocator> >::other >  _waypoints_type;
  _waypoints_type waypoints;





  typedef boost::shared_ptr< ::eufs_msgs::WaypointArrayStamped_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::eufs_msgs::WaypointArrayStamped_<ContainerAllocator> const> ConstPtr;

}; // struct WaypointArrayStamped_

typedef ::eufs_msgs::WaypointArrayStamped_<std::allocator<void> > WaypointArrayStamped;

typedef boost::shared_ptr< ::eufs_msgs::WaypointArrayStamped > WaypointArrayStampedPtr;
typedef boost::shared_ptr< ::eufs_msgs::WaypointArrayStamped const> WaypointArrayStampedConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::eufs_msgs::WaypointArrayStamped_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::eufs_msgs::WaypointArrayStamped_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::eufs_msgs::WaypointArrayStamped_<ContainerAllocator1> & lhs, const ::eufs_msgs::WaypointArrayStamped_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.waypoints == rhs.waypoints;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::eufs_msgs::WaypointArrayStamped_<ContainerAllocator1> & lhs, const ::eufs_msgs::WaypointArrayStamped_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace eufs_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::eufs_msgs::WaypointArrayStamped_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::eufs_msgs::WaypointArrayStamped_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::eufs_msgs::WaypointArrayStamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::eufs_msgs::WaypointArrayStamped_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::eufs_msgs::WaypointArrayStamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::eufs_msgs::WaypointArrayStamped_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::eufs_msgs::WaypointArrayStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "67e4e1ebd4bde53d443d5eae4ecef75e";
  }

  static const char* value(const ::eufs_msgs::WaypointArrayStamped_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x67e4e1ebd4bde53dULL;
  static const uint64_t static_value2 = 0x443d5eae4ecef75eULL;
};

template<class ContainerAllocator>
struct DataType< ::eufs_msgs::WaypointArrayStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "eufs_msgs/WaypointArrayStamped";
  }

  static const char* value(const ::eufs_msgs::WaypointArrayStamped_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::eufs_msgs::WaypointArrayStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This message is used by planning nodes to advertise suggested trajectory waypoints \n"
"# as well as suggested velocity and steering at each waypoint.\n"
"\n"
"Header header\n"
"\n"
"Waypoint[] waypoints\n"
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
"\n"
"================================================================================\n"
"MSG: eufs_msgs/Waypoint\n"
"# Waypoint position\n"
"geometry_msgs/Point position\n"
"\n"
"# Suggested forward velocity (x direction in car frame)\n"
"float64 speed # m/s\n"
"\n"
"# Suggested steering angle\n"
"float64 suggested_steering # rad\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::eufs_msgs::WaypointArrayStamped_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::eufs_msgs::WaypointArrayStamped_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.waypoints);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct WaypointArrayStamped_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::eufs_msgs::WaypointArrayStamped_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::eufs_msgs::WaypointArrayStamped_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "waypoints[]" << std::endl;
    for (size_t i = 0; i < v.waypoints.size(); ++i)
    {
      s << indent << "  waypoints[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::eufs_msgs::Waypoint_<ContainerAllocator> >::stream(s, indent + "    ", v.waypoints[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // EUFS_MSGS_MESSAGE_WAYPOINTARRAYSTAMPED_H
