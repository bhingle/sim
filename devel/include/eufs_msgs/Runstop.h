// Generated by gencpp from file eufs_msgs/Runstop.msg
// DO NOT EDIT!


#ifndef EUFS_MSGS_MESSAGE_RUNSTOP_H
#define EUFS_MSGS_MESSAGE_RUNSTOP_H


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
struct Runstop_
{
  typedef Runstop_<ContainerAllocator> Type;

  Runstop_()
    : header()
    , sender()
    , motion_enabled(false)  {
    }
  Runstop_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , sender(_alloc)
    , motion_enabled(false)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _sender_type;
  _sender_type sender;

   typedef uint8_t _motion_enabled_type;
  _motion_enabled_type motion_enabled;





  typedef boost::shared_ptr< ::eufs_msgs::Runstop_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::eufs_msgs::Runstop_<ContainerAllocator> const> ConstPtr;

}; // struct Runstop_

typedef ::eufs_msgs::Runstop_<std::allocator<void> > Runstop;

typedef boost::shared_ptr< ::eufs_msgs::Runstop > RunstopPtr;
typedef boost::shared_ptr< ::eufs_msgs::Runstop const> RunstopConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::eufs_msgs::Runstop_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::eufs_msgs::Runstop_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::eufs_msgs::Runstop_<ContainerAllocator1> & lhs, const ::eufs_msgs::Runstop_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.sender == rhs.sender &&
    lhs.motion_enabled == rhs.motion_enabled;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::eufs_msgs::Runstop_<ContainerAllocator1> & lhs, const ::eufs_msgs::Runstop_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace eufs_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::eufs_msgs::Runstop_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::eufs_msgs::Runstop_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::eufs_msgs::Runstop_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::eufs_msgs::Runstop_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::eufs_msgs::Runstop_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::eufs_msgs::Runstop_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::eufs_msgs::Runstop_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9c991989332a017d4850170a29c106fb";
  }

  static const char* value(const ::eufs_msgs::Runstop_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9c991989332a017dULL;
  static const uint64_t static_value2 = 0x4850170a29c106fbULL;
};

template<class ContainerAllocator>
struct DataType< ::eufs_msgs::Runstop_<ContainerAllocator> >
{
  static const char* value()
  {
    return "eufs_msgs/Runstop";
  }

  static const char* value(const ::eufs_msgs::Runstop_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::eufs_msgs::Runstop_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"\n"
"string sender\n"
"bool motion_enabled\n"
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

  static const char* value(const ::eufs_msgs::Runstop_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::eufs_msgs::Runstop_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.sender);
      stream.next(m.motion_enabled);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Runstop_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::eufs_msgs::Runstop_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::eufs_msgs::Runstop_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "sender: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.sender);
    s << indent << "motion_enabled: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.motion_enabled);
  }
};

} // namespace message_operations
} // namespace ros

#endif // EUFS_MSGS_MESSAGE_RUNSTOP_H
