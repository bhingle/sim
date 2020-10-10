// Generated by gencpp from file eufs_msgs/ConeWithCovariance.msg
// DO NOT EDIT!


#ifndef EUFS_MSGS_MESSAGE_CONEWITHCOVARIANCE_H
#define EUFS_MSGS_MESSAGE_CONEWITHCOVARIANCE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Point.h>

namespace eufs_msgs
{
template <class ContainerAllocator>
struct ConeWithCovariance_
{
  typedef ConeWithCovariance_<ContainerAllocator> Type;

  ConeWithCovariance_()
    : point()
    , covariance()  {
      covariance.assign(0.0);
  }
  ConeWithCovariance_(const ContainerAllocator& _alloc)
    : point(_alloc)
    , covariance()  {
  (void)_alloc;
      covariance.assign(0.0);
  }



   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _point_type;
  _point_type point;

   typedef boost::array<double, 4>  _covariance_type;
  _covariance_type covariance;





  typedef boost::shared_ptr< ::eufs_msgs::ConeWithCovariance_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::eufs_msgs::ConeWithCovariance_<ContainerAllocator> const> ConstPtr;

}; // struct ConeWithCovariance_

typedef ::eufs_msgs::ConeWithCovariance_<std::allocator<void> > ConeWithCovariance;

typedef boost::shared_ptr< ::eufs_msgs::ConeWithCovariance > ConeWithCovariancePtr;
typedef boost::shared_ptr< ::eufs_msgs::ConeWithCovariance const> ConeWithCovarianceConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::eufs_msgs::ConeWithCovariance_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::eufs_msgs::ConeWithCovariance_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::eufs_msgs::ConeWithCovariance_<ContainerAllocator1> & lhs, const ::eufs_msgs::ConeWithCovariance_<ContainerAllocator2> & rhs)
{
  return lhs.point == rhs.point &&
    lhs.covariance == rhs.covariance;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::eufs_msgs::ConeWithCovariance_<ContainerAllocator1> & lhs, const ::eufs_msgs::ConeWithCovariance_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace eufs_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::eufs_msgs::ConeWithCovariance_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::eufs_msgs::ConeWithCovariance_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::eufs_msgs::ConeWithCovariance_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::eufs_msgs::ConeWithCovariance_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::eufs_msgs::ConeWithCovariance_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::eufs_msgs::ConeWithCovariance_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::eufs_msgs::ConeWithCovariance_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bec8795f508b6f8adfedec6fd5758082";
  }

  static const char* value(const ::eufs_msgs::ConeWithCovariance_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbec8795f508b6f8aULL;
  static const uint64_t static_value2 = 0xdfedec6fd5758082ULL;
};

template<class ContainerAllocator>
struct DataType< ::eufs_msgs::ConeWithCovariance_<ContainerAllocator> >
{
  static const char* value()
  {
    return "eufs_msgs/ConeWithCovariance";
  }

  static const char* value(const ::eufs_msgs::ConeWithCovariance_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::eufs_msgs::ConeWithCovariance_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Cone information\n"
"\n"
"geometry_msgs/Point point\n"
"float64[4] covariance\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::eufs_msgs::ConeWithCovariance_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::eufs_msgs::ConeWithCovariance_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.point);
      stream.next(m.covariance);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ConeWithCovariance_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::eufs_msgs::ConeWithCovariance_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::eufs_msgs::ConeWithCovariance_<ContainerAllocator>& v)
  {
    s << indent << "point: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.point);
    s << indent << "covariance[]" << std::endl;
    for (size_t i = 0; i < v.covariance.size(); ++i)
    {
      s << indent << "  covariance[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.covariance[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // EUFS_MSGS_MESSAGE_CONEWITHCOVARIANCE_H