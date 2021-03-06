// Generated by gencpp from file eufs_msgs/SLAMState.msg
// DO NOT EDIT!


#ifndef EUFS_MSGS_MESSAGE_SLAMSTATE_H
#define EUFS_MSGS_MESSAGE_SLAMSTATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace eufs_msgs
{
template <class ContainerAllocator>
struct SLAMState_
{
  typedef SLAMState_<ContainerAllocator> Type;

  SLAMState_()
    : loop_closed(false)
    , laps(0)
    , status()
    , state(0)  {
    }
  SLAMState_(const ContainerAllocator& _alloc)
    : loop_closed(false)
    , laps(0)
    , status(_alloc)
    , state(0)  {
  (void)_alloc;
    }



   typedef uint8_t _loop_closed_type;
  _loop_closed_type loop_closed;

   typedef int16_t _laps_type;
  _laps_type laps;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _status_type;
  _status_type status;

   typedef int8_t _state_type;
  _state_type state;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(NO_INPUTS)
  #undef NO_INPUTS
#endif
#if defined(_WIN32) && defined(MAPPING)
  #undef MAPPING
#endif
#if defined(_WIN32) && defined(LOCALISING)
  #undef LOCALISING
#endif
#if defined(_WIN32) && defined(TIMEOUT)
  #undef TIMEOUT
#endif
#if defined(_WIN32) && defined(RECOMMENDS_FAILURE)
  #undef RECOMMENDS_FAILURE
#endif

  enum {
    NO_INPUTS = 0,
    MAPPING = 1,
    LOCALISING = 2,
    TIMEOUT = 3,
    RECOMMENDS_FAILURE = 4,
  };


  typedef boost::shared_ptr< ::eufs_msgs::SLAMState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::eufs_msgs::SLAMState_<ContainerAllocator> const> ConstPtr;

}; // struct SLAMState_

typedef ::eufs_msgs::SLAMState_<std::allocator<void> > SLAMState;

typedef boost::shared_ptr< ::eufs_msgs::SLAMState > SLAMStatePtr;
typedef boost::shared_ptr< ::eufs_msgs::SLAMState const> SLAMStateConstPtr;

// constants requiring out of line definition

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::eufs_msgs::SLAMState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::eufs_msgs::SLAMState_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::eufs_msgs::SLAMState_<ContainerAllocator1> & lhs, const ::eufs_msgs::SLAMState_<ContainerAllocator2> & rhs)
{
  return lhs.loop_closed == rhs.loop_closed &&
    lhs.laps == rhs.laps &&
    lhs.status == rhs.status &&
    lhs.state == rhs.state;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::eufs_msgs::SLAMState_<ContainerAllocator1> & lhs, const ::eufs_msgs::SLAMState_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace eufs_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::eufs_msgs::SLAMState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::eufs_msgs::SLAMState_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::eufs_msgs::SLAMState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::eufs_msgs::SLAMState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::eufs_msgs::SLAMState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::eufs_msgs::SLAMState_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::eufs_msgs::SLAMState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ab64b055dcd9ea5dad8d577fe02146d7";
  }

  static const char* value(const ::eufs_msgs::SLAMState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xab64b055dcd9ea5dULL;
  static const uint64_t static_value2 = 0xad8d577fe02146d7ULL;
};

template<class ContainerAllocator>
struct DataType< ::eufs_msgs::SLAMState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "eufs_msgs/SLAMState";
  }

  static const char* value(const ::eufs_msgs::SLAMState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::eufs_msgs::SLAMState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool loop_closed          # True after loop closure\n"
"int16 laps\n"
"string status             # Dump for any logging purposes. Eg: \"particle covariance high; can't localise\"\n"
"\n"
"# Possible states of the algorithm\n"
"int8 NO_INPUTS=0          # No inputs have been received yet\n"
"int8 MAPPING=1            # Building map\n"
"int8 LOCALISING=2         # Loop closed, now localising only\n"
"int8 TIMEOUT=3            # Input topics timedout\n"
"int8 RECOMMENDS_FAILURE=4 # If true, critical failure!  Recommends emergency shutdown\n"
"\n"
"int8 state                # States enumerated above\n"
;
  }

  static const char* value(const ::eufs_msgs::SLAMState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::eufs_msgs::SLAMState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.loop_closed);
      stream.next(m.laps);
      stream.next(m.status);
      stream.next(m.state);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SLAMState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::eufs_msgs::SLAMState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::eufs_msgs::SLAMState_<ContainerAllocator>& v)
  {
    s << indent << "loop_closed: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.loop_closed);
    s << indent << "laps: ";
    Printer<int16_t>::stream(s, indent + "  ", v.laps);
    s << indent << "status: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.status);
    s << indent << "state: ";
    Printer<int8_t>::stream(s, indent + "  ", v.state);
  }
};

} // namespace message_operations
} // namespace ros

#endif // EUFS_MSGS_MESSAGE_SLAMSTATE_H
