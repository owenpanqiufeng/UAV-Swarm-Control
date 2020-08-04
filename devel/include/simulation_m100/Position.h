// Generated by gencpp from file simulation_m100/Position.msg
// DO NOT EDIT!


#ifndef SIMULATION_M100_MESSAGE_POSITION_H
#define SIMULATION_M100_MESSAGE_POSITION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace simulation_m100
{
template <class ContainerAllocator>
struct Position_
{
  typedef Position_<ContainerAllocator> Type;

  Position_()
    : kind(0)
    , x(0.0)
    , y(0.0)
    , z(0.0)  {
    }
  Position_(const ContainerAllocator& _alloc)
    : kind(0)
    , x(0.0)
    , y(0.0)
    , z(0.0)  {
  (void)_alloc;
    }



   typedef int32_t _kind_type;
  _kind_type kind;

   typedef float _x_type;
  _x_type x;

   typedef float _y_type;
  _y_type y;

   typedef float _z_type;
  _z_type z;





  typedef boost::shared_ptr< ::simulation_m100::Position_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::simulation_m100::Position_<ContainerAllocator> const> ConstPtr;

}; // struct Position_

typedef ::simulation_m100::Position_<std::allocator<void> > Position;

typedef boost::shared_ptr< ::simulation_m100::Position > PositionPtr;
typedef boost::shared_ptr< ::simulation_m100::Position const> PositionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::simulation_m100::Position_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::simulation_m100::Position_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace simulation_m100

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'simulation_m100': ['/home/uav/ROS/m100/src/simulation_m100/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::simulation_m100::Position_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::simulation_m100::Position_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::simulation_m100::Position_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::simulation_m100::Position_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::simulation_m100::Position_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::simulation_m100::Position_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::simulation_m100::Position_<ContainerAllocator> >
{
  static const char* value()
  {
    return "381238523f8add39b00b8a991b078417";
  }

  static const char* value(const ::simulation_m100::Position_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x381238523f8add39ULL;
  static const uint64_t static_value2 = 0xb00b8a991b078417ULL;
};

template<class ContainerAllocator>
struct DataType< ::simulation_m100::Position_<ContainerAllocator> >
{
  static const char* value()
  {
    return "simulation_m100/Position";
  }

  static const char* value(const ::simulation_m100::Position_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::simulation_m100::Position_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 kind\n\
float32 x\n\
float32 y\n\
float32 z\n\
";
  }

  static const char* value(const ::simulation_m100::Position_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::simulation_m100::Position_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.kind);
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Position_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::simulation_m100::Position_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::simulation_m100::Position_<ContainerAllocator>& v)
  {
    s << indent << "kind: ";
    Printer<int32_t>::stream(s, indent + "  ", v.kind);
    s << indent << "x: ";
    Printer<float>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<float>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<float>::stream(s, indent + "  ", v.z);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SIMULATION_M100_MESSAGE_POSITION_H
