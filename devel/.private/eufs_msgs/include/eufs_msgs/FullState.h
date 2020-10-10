// Generated by gencpp from file eufs_msgs/FullState.msg
// DO NOT EDIT!


#ifndef EUFS_MSGS_MESSAGE_FULLSTATE_H
#define EUFS_MSGS_MESSAGE_FULLSTATE_H


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
struct FullState_
{
  typedef FullState_<ContainerAllocator> Type;

  FullState_()
    : header()
    , x_pos(0.0)
    , y_pos(0.0)
    , yaw(0.0)
    , roll(0.0)
    , u_x(0.0)
    , u_y(0.0)
    , yaw_mder(0.0)
    , front_throttle(0.0)
    , rear_throttle(0.0)
    , steering(0.0)  {
    }
  FullState_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , x_pos(0.0)
    , y_pos(0.0)
    , yaw(0.0)
    , roll(0.0)
    , u_x(0.0)
    , u_y(0.0)
    , yaw_mder(0.0)
    , front_throttle(0.0)
    , rear_throttle(0.0)
    , steering(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef double _x_pos_type;
  _x_pos_type x_pos;

   typedef double _y_pos_type;
  _y_pos_type y_pos;

   typedef double _yaw_type;
  _yaw_type yaw;

   typedef double _roll_type;
  _roll_type roll;

   typedef double _u_x_type;
  _u_x_type u_x;

   typedef double _u_y_type;
  _u_y_type u_y;

   typedef double _yaw_mder_type;
  _yaw_mder_type yaw_mder;

   typedef double _front_throttle_type;
  _front_throttle_type front_throttle;

   typedef double _rear_throttle_type;
  _rear_throttle_type rear_throttle;

   typedef double _steering_type;
  _steering_type steering;





  typedef boost::shared_ptr< ::eufs_msgs::FullState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::eufs_msgs::FullState_<ContainerAllocator> const> ConstPtr;

}; // struct FullState_

typedef ::eufs_msgs::FullState_<std::allocator<void> > FullState;

typedef boost::shared_ptr< ::eufs_msgs::FullState > FullStatePtr;
typedef boost::shared_ptr< ::eufs_msgs::FullState const> FullStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::eufs_msgs::FullState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::eufs_msgs::FullState_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::eufs_msgs::FullState_<ContainerAllocator1> & lhs, const ::eufs_msgs::FullState_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.x_pos == rhs.x_pos &&
    lhs.y_pos == rhs.y_pos &&
    lhs.yaw == rhs.yaw &&
    lhs.roll == rhs.roll &&
    lhs.u_x == rhs.u_x &&
    lhs.u_y == rhs.u_y &&
    lhs.yaw_mder == rhs.yaw_mder &&
    lhs.front_throttle == rhs.front_throttle &&
    lhs.rear_throttle == rhs.rear_throttle &&
    lhs.steering == rhs.steering;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::eufs_msgs::FullState_<ContainerAllocator1> & lhs, const ::eufs_msgs::FullState_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace eufs_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::eufs_msgs::FullState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::eufs_msgs::FullState_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::eufs_msgs::FullState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::eufs_msgs::FullState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::eufs_msgs::FullState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::eufs_msgs::FullState_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::eufs_msgs::FullState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "401dfd30194f0a98ee1ec12310cf6b0f";
  }

  static const char* value(const ::eufs_msgs::FullState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x401dfd30194f0a98ULL;
  static const uint64_t static_value2 = 0xee1ec12310cf6b0fULL;
};

template<class ContainerAllocator>
struct DataType< ::eufs_msgs::FullState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "eufs_msgs/FullState";
  }

  static const char* value(const ::eufs_msgs::FullState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::eufs_msgs::FullState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"\n"
"float64 x_pos\n"
"float64 y_pos\n"
"float64 yaw\n"
"float64 roll\n"
"float64 u_x\n"
"float64 u_y\n"
"float64 yaw_mder\n"
"float64 front_throttle\n"
"float64 rear_throttle\n"
"float64 steering\n"
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

  static const char* value(const ::eufs_msgs::FullState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::eufs_msgs::FullState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.x_pos);
      stream.next(m.y_pos);
      stream.next(m.yaw);
      stream.next(m.roll);
      stream.next(m.u_x);
      stream.next(m.u_y);
      stream.next(m.yaw_mder);
      stream.next(m.front_throttle);
      stream.next(m.rear_throttle);
      stream.next(m.steering);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FullState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::eufs_msgs::FullState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::eufs_msgs::FullState_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "x_pos: ";
    Printer<double>::stream(s, indent + "  ", v.x_pos);
    s << indent << "y_pos: ";
    Printer<double>::stream(s, indent + "  ", v.y_pos);
    s << indent << "yaw: ";
    Printer<double>::stream(s, indent + "  ", v.yaw);
    s << indent << "roll: ";
    Printer<double>::stream(s, indent + "  ", v.roll);
    s << indent << "u_x: ";
    Printer<double>::stream(s, indent + "  ", v.u_x);
    s << indent << "u_y: ";
    Printer<double>::stream(s, indent + "  ", v.u_y);
    s << indent << "yaw_mder: ";
    Printer<double>::stream(s, indent + "  ", v.yaw_mder);
    s << indent << "front_throttle: ";
    Printer<double>::stream(s, indent + "  ", v.front_throttle);
    s << indent << "rear_throttle: ";
    Printer<double>::stream(s, indent + "  ", v.rear_throttle);
    s << indent << "steering: ";
    Printer<double>::stream(s, indent + "  ", v.steering);
  }
};

} // namespace message_operations
} // namespace ros

#endif // EUFS_MSGS_MESSAGE_FULLSTATE_H
