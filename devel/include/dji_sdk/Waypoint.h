// Generated by gencpp from file dji_sdk/Waypoint.msg
// DO NOT EDIT!


#ifndef DJI_SDK_MESSAGE_WAYPOINT_H
#define DJI_SDK_MESSAGE_WAYPOINT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace dji_sdk
{
template <class ContainerAllocator>
struct Waypoint_
{
  typedef Waypoint_<ContainerAllocator> Type;

  Waypoint_()
    : latitude(0.0)
    , longitude(0.0)
    , altitude(0.0)
    , heading(0)
    , staytime(0)  {
    }
  Waypoint_(const ContainerAllocator& _alloc)
    : latitude(0.0)
    , longitude(0.0)
    , altitude(0.0)
    , heading(0)
    , staytime(0)  {
  (void)_alloc;
    }



   typedef double _latitude_type;
  _latitude_type latitude;

   typedef double _longitude_type;
  _longitude_type longitude;

   typedef float _altitude_type;
  _altitude_type altitude;

   typedef int16_t _heading_type;
  _heading_type heading;

   typedef uint16_t _staytime_type;
  _staytime_type staytime;





  typedef boost::shared_ptr< ::dji_sdk::Waypoint_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dji_sdk::Waypoint_<ContainerAllocator> const> ConstPtr;

}; // struct Waypoint_

typedef ::dji_sdk::Waypoint_<std::allocator<void> > Waypoint;

typedef boost::shared_ptr< ::dji_sdk::Waypoint > WaypointPtr;
typedef boost::shared_ptr< ::dji_sdk::Waypoint const> WaypointConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dji_sdk::Waypoint_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dji_sdk::Waypoint_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace dji_sdk

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'dji_sdk': ['/home/uav/ROS/m100/src/dji_sdk/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::dji_sdk::Waypoint_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dji_sdk::Waypoint_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_sdk::Waypoint_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_sdk::Waypoint_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_sdk::Waypoint_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_sdk::Waypoint_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dji_sdk::Waypoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1d0881fabe75ce713c47829a8aa66d90";
  }

  static const char* value(const ::dji_sdk::Waypoint_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1d0881fabe75ce71ULL;
  static const uint64_t static_value2 = 0x3c47829a8aa66d90ULL;
};

template<class ContainerAllocator>
struct DataType< ::dji_sdk::Waypoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dji_sdk/Waypoint";
  }

  static const char* value(const ::dji_sdk::Waypoint_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dji_sdk::Waypoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 latitude      # in degree\n\
float64 longitude     # in degree\n\
float32 altitude\n\
int16 heading         #heading is in [-180,180]\n\
uint16 staytime       # in second\n\
\n\
";
  }

  static const char* value(const ::dji_sdk::Waypoint_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dji_sdk::Waypoint_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.latitude);
      stream.next(m.longitude);
      stream.next(m.altitude);
      stream.next(m.heading);
      stream.next(m.staytime);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Waypoint_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dji_sdk::Waypoint_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dji_sdk::Waypoint_<ContainerAllocator>& v)
  {
    s << indent << "latitude: ";
    Printer<double>::stream(s, indent + "  ", v.latitude);
    s << indent << "longitude: ";
    Printer<double>::stream(s, indent + "  ", v.longitude);
    s << indent << "altitude: ";
    Printer<float>::stream(s, indent + "  ", v.altitude);
    s << indent << "heading: ";
    Printer<int16_t>::stream(s, indent + "  ", v.heading);
    s << indent << "staytime: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.staytime);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DJI_SDK_MESSAGE_WAYPOINT_H
