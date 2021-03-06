// Generated by gencpp from file eufs_msgs/PathIntegralStats.msg
// DO NOT EDIT!


#ifndef EUFS_MSGS_MESSAGE_PATHINTEGRALSTATS_H
#define EUFS_MSGS_MESSAGE_PATHINTEGRALSTATS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <eufs_msgs/PathIntegralParams.h>
#include <eufs_msgs/LapStats.h>

namespace eufs_msgs
{
template <class ContainerAllocator>
struct PathIntegralStats_
{
  typedef PathIntegralStats_<ContainerAllocator> Type;

  PathIntegralStats_()
    : header()
    , tag()
    , params()
    , stats()  {
    }
  PathIntegralStats_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , tag(_alloc)
    , params(_alloc)
    , stats(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _tag_type;
  _tag_type tag;

   typedef  ::eufs_msgs::PathIntegralParams_<ContainerAllocator>  _params_type;
  _params_type params;

   typedef  ::eufs_msgs::LapStats_<ContainerAllocator>  _stats_type;
  _stats_type stats;





  typedef boost::shared_ptr< ::eufs_msgs::PathIntegralStats_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::eufs_msgs::PathIntegralStats_<ContainerAllocator> const> ConstPtr;

}; // struct PathIntegralStats_

typedef ::eufs_msgs::PathIntegralStats_<std::allocator<void> > PathIntegralStats;

typedef boost::shared_ptr< ::eufs_msgs::PathIntegralStats > PathIntegralStatsPtr;
typedef boost::shared_ptr< ::eufs_msgs::PathIntegralStats const> PathIntegralStatsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::eufs_msgs::PathIntegralStats_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::eufs_msgs::PathIntegralStats_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::eufs_msgs::PathIntegralStats_<ContainerAllocator1> & lhs, const ::eufs_msgs::PathIntegralStats_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.tag == rhs.tag &&
    lhs.params == rhs.params &&
    lhs.stats == rhs.stats;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::eufs_msgs::PathIntegralStats_<ContainerAllocator1> & lhs, const ::eufs_msgs::PathIntegralStats_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace eufs_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::eufs_msgs::PathIntegralStats_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::eufs_msgs::PathIntegralStats_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::eufs_msgs::PathIntegralStats_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::eufs_msgs::PathIntegralStats_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::eufs_msgs::PathIntegralStats_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::eufs_msgs::PathIntegralStats_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::eufs_msgs::PathIntegralStats_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9a732ef90ed77e7ea292473d12fb8c41";
  }

  static const char* value(const ::eufs_msgs::PathIntegralStats_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9a732ef90ed77e7eULL;
  static const uint64_t static_value2 = 0xa292473d12fb8c41ULL;
};

template<class ContainerAllocator>
struct DataType< ::eufs_msgs::PathIntegralStats_<ContainerAllocator> >
{
  static const char* value()
  {
    return "eufs_msgs/PathIntegralStats";
  }

  static const char* value(const ::eufs_msgs::PathIntegralStats_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::eufs_msgs::PathIntegralStats_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"string tag\n"
"\n"
"PathIntegralParams params\n"
"LapStats stats\n"
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
"\n"
"================================================================================\n"
"MSG: eufs_msgs/PathIntegralParams\n"
"int64 hz\n"
"int64 num_timesteps\n"
"int64 num_iters\n"
"float64 gamma\n"
"float64 init_steering\n"
"float64 init_throttle\n"
"float64 steering_var\n"
"float64 throttle_var\n"
"float64 max_throttle\n"
"float64 speed_coefficient\n"
"float64 track_coefficient\n"
"float64 max_slip_angle\n"
"float64 track_slop\n"
"float64 crash_coeff\n"
"string map_path\n"
"float64 desired_speed\n"
"================================================================================\n"
"MSG: eufs_msgs/LapStats\n"
"Header header\n"
"\n"
"int64 lap_number\n"
"float64 lap_time\n"
"float64 avg_speed\n"
"float64 max_speed\n"
"float64 max_slip\n"
"float64 max_lateral_accel\n"
;
  }

  static const char* value(const ::eufs_msgs::PathIntegralStats_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::eufs_msgs::PathIntegralStats_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.tag);
      stream.next(m.params);
      stream.next(m.stats);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PathIntegralStats_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::eufs_msgs::PathIntegralStats_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::eufs_msgs::PathIntegralStats_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "tag: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.tag);
    s << indent << "params: ";
    s << std::endl;
    Printer< ::eufs_msgs::PathIntegralParams_<ContainerAllocator> >::stream(s, indent + "  ", v.params);
    s << indent << "stats: ";
    s << std::endl;
    Printer< ::eufs_msgs::LapStats_<ContainerAllocator> >::stream(s, indent + "  ", v.stats);
  }
};

} // namespace message_operations
} // namespace ros

#endif // EUFS_MSGS_MESSAGE_PATHINTEGRALSTATS_H
