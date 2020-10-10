// Generated by gencpp from file eufs_msgs/PointArrayStamped.msg
// DO NOT EDIT!


#ifndef EUFS_MSGS_MESSAGE_POINTARRAYSTAMPED_H
#define EUFS_MSGS_MESSAGE_POINTARRAYSTAMPED_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Point.h>

namespace eufs_msgs
{
template <class ContainerAllocator>
struct PointArrayStamped_
{
  typedef PointArrayStamped_<ContainerAllocator> Type;

  PointArrayStamped_()
    : header()
    , points()  {
    }
  PointArrayStamped_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , points(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::geometry_msgs::Point_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Point_<ContainerAllocator> >::other >  _points_type;
  _points_type points;





  typedef boost::shared_ptr< ::eufs_msgs::PointArrayStamped_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::eufs_msgs::PointArrayStamped_<ContainerAllocator> const> ConstPtr;

}; // struct PointArrayStamped_

typedef ::eufs_msgs::PointArrayStamped_<std::allocator<void> > PointArrayStamped;

typedef boost::shared_ptr< ::eufs_msgs::PointArrayStamped > PointArrayStampedPtr;
typedef boost::shared_ptr< ::eufs_msgs::PointArrayStamped const> PointArrayStampedConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::eufs_msgs::PointArrayStamped_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::eufs_msgs::PointArrayStamped_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::eufs_msgs::PointArrayStamped_<ContainerAllocator1> & lhs, const ::eufs_msgs::PointArrayStamped_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.points == rhs.points;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::eufs_msgs::PointArrayStamped_<ContainerAllocator1> & lhs, const ::eufs_msgs::PointArrayStamped_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace eufs_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::eufs_msgs::PointArrayStamped_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::eufs_msgs::PointArrayStamped_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::eufs_msgs::PointArrayStamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::eufs_msgs::PointArrayStamped_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::eufs_msgs::PointArrayStamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::eufs_msgs::PointArrayStamped_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::eufs_msgs::PointArrayStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2199cac4695ce1fc0f346db535dda30d";
  }

  static const char* value(const ::eufs_msgs::PointArrayStamped_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2199cac4695ce1fcULL;
  static const uint64_t static_value2 = 0x0f346db535dda30dULL;
};

template<class ContainerAllocator>
struct DataType< ::eufs_msgs::PointArrayStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "eufs_msgs/PointArrayStamped";
  }

  static const char* value(const ::eufs_msgs::PointArrayStamped_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::eufs_msgs::PointArrayStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"\n"
"# Simple msg for array of points\n"
"geometry_msgs/Point[] points\n"
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
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::eufs_msgs::PointArrayStamped_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::eufs_msgs::PointArrayStamped_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.points);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PointArrayStamped_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::eufs_msgs::PointArrayStamped_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::eufs_msgs::PointArrayStamped_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "points[]" << std::endl;
    for (size_t i = 0; i < v.points.size(); ++i)
    {
      s << indent << "  points[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "    ", v.points[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // EUFS_MSGS_MESSAGE_POINTARRAYSTAMPED_H