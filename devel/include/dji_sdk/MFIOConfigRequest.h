// Generated by gencpp from file dji_sdk/MFIOConfigRequest.msg
// DO NOT EDIT!


#ifndef DJI_SDK_MESSAGE_MFIOCONFIGREQUEST_H
#define DJI_SDK_MESSAGE_MFIOCONFIGREQUEST_H


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
struct MFIOConfigRequest_
{
  typedef MFIOConfigRequest_<ContainerAllocator> Type;

  MFIOConfigRequest_()
    : mode(0)
    , channel(0)
    , init_on_time_us(0)
    , pwm_freq(0)  {
    }
  MFIOConfigRequest_(const ContainerAllocator& _alloc)
    : mode(0)
    , channel(0)
    , init_on_time_us(0)
    , pwm_freq(0)  {
  (void)_alloc;
    }



   typedef uint8_t _mode_type;
  _mode_type mode;

   typedef uint8_t _channel_type;
  _channel_type channel;

   typedef uint32_t _init_on_time_us_type;
  _init_on_time_us_type init_on_time_us;

   typedef uint16_t _pwm_freq_type;
  _pwm_freq_type pwm_freq;



  enum {
    MODE_PWM_OUT = 0u,
    MODE_GPIO_OUT = 2u,
    MODE_GPIO_IN = 3u,
    MODE_ADC = 4u,
  };


  typedef boost::shared_ptr< ::dji_sdk::MFIOConfigRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dji_sdk::MFIOConfigRequest_<ContainerAllocator> const> ConstPtr;

}; // struct MFIOConfigRequest_

typedef ::dji_sdk::MFIOConfigRequest_<std::allocator<void> > MFIOConfigRequest;

typedef boost::shared_ptr< ::dji_sdk::MFIOConfigRequest > MFIOConfigRequestPtr;
typedef boost::shared_ptr< ::dji_sdk::MFIOConfigRequest const> MFIOConfigRequestConstPtr;

// constants requiring out of line definition

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dji_sdk::MFIOConfigRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dji_sdk::MFIOConfigRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::dji_sdk::MFIOConfigRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dji_sdk::MFIOConfigRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_sdk::MFIOConfigRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_sdk::MFIOConfigRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_sdk::MFIOConfigRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_sdk::MFIOConfigRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dji_sdk::MFIOConfigRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ad06bda475c7f13453680ee626114de0";
  }

  static const char* value(const ::dji_sdk::MFIOConfigRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xad06bda475c7f134ULL;
  static const uint64_t static_value2 = 0x53680ee626114de0ULL;
};

template<class ContainerAllocator>
struct DataType< ::dji_sdk::MFIOConfigRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dji_sdk/MFIOConfigRequest";
  }

  static const char* value(const ::dji_sdk::MFIOConfigRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dji_sdk::MFIOConfigRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
uint8 MODE_PWM_OUT  = 0\n\
\n\
uint8 MODE_GPIO_OUT = 2\n\
uint8 MODE_GPIO_IN  = 3\n\
uint8 MODE_ADC      = 4\n\
\n\
\n\
uint8 mode\n\
uint8 channel\n\
uint32 init_on_time_us\n\
uint16 pwm_freq\n\
";
  }

  static const char* value(const ::dji_sdk::MFIOConfigRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dji_sdk::MFIOConfigRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.mode);
      stream.next(m.channel);
      stream.next(m.init_on_time_us);
      stream.next(m.pwm_freq);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MFIOConfigRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dji_sdk::MFIOConfigRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dji_sdk::MFIOConfigRequest_<ContainerAllocator>& v)
  {
    s << indent << "mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.mode);
    s << indent << "channel: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.channel);
    s << indent << "init_on_time_us: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.init_on_time_us);
    s << indent << "pwm_freq: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.pwm_freq);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DJI_SDK_MESSAGE_MFIOCONFIGREQUEST_H
