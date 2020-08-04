// Generated by gencpp from file dji_sdk/MFIOSetValueRequest.msg
// DO NOT EDIT!


#ifndef DJI_SDK_MESSAGE_MFIOSETVALUEREQUEST_H
#define DJI_SDK_MESSAGE_MFIOSETVALUEREQUEST_H


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
struct MFIOSetValueRequest_
{
  typedef MFIOSetValueRequest_<ContainerAllocator> Type;

  MFIOSetValueRequest_()
    : channel(0)
    , init_on_time_us(0)  {
    }
  MFIOSetValueRequest_(const ContainerAllocator& _alloc)
    : channel(0)
    , init_on_time_us(0)  {
  (void)_alloc;
    }



   typedef uint8_t _channel_type;
  _channel_type channel;

   typedef uint32_t _init_on_time_us_type;
  _init_on_time_us_type init_on_time_us;





  typedef boost::shared_ptr< ::dji_sdk::MFIOSetValueRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dji_sdk::MFIOSetValueRequest_<ContainerAllocator> const> ConstPtr;

}; // struct MFIOSetValueRequest_

typedef ::dji_sdk::MFIOSetValueRequest_<std::allocator<void> > MFIOSetValueRequest;

typedef boost::shared_ptr< ::dji_sdk::MFIOSetValueRequest > MFIOSetValueRequestPtr;
typedef boost::shared_ptr< ::dji_sdk::MFIOSetValueRequest const> MFIOSetValueRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dji_sdk::MFIOSetValueRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dji_sdk::MFIOSetValueRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::dji_sdk::MFIOSetValueRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dji_sdk::MFIOSetValueRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_sdk::MFIOSetValueRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_sdk::MFIOSetValueRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_sdk::MFIOSetValueRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_sdk::MFIOSetValueRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dji_sdk::MFIOSetValueRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7a1c84fd096204723ecbb1a57b618e28";
  }

  static const char* value(const ::dji_sdk::MFIOSetValueRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7a1c84fd09620472ULL;
  static const uint64_t static_value2 = 0x3ecbb1a57b618e28ULL;
};

template<class ContainerAllocator>
struct DataType< ::dji_sdk::MFIOSetValueRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dji_sdk/MFIOSetValueRequest";
  }

  static const char* value(const ::dji_sdk::MFIOSetValueRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dji_sdk::MFIOSetValueRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 channel\n\
uint32 init_on_time_us\n\
";
  }

  static const char* value(const ::dji_sdk::MFIOSetValueRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dji_sdk::MFIOSetValueRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.channel);
      stream.next(m.init_on_time_us);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MFIOSetValueRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dji_sdk::MFIOSetValueRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dji_sdk::MFIOSetValueRequest_<ContainerAllocator>& v)
  {
    s << indent << "channel: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.channel);
    s << indent << "init_on_time_us: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.init_on_time_us);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DJI_SDK_MESSAGE_MFIOSETVALUEREQUEST_H
