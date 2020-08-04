// Generated by gencpp from file m100_v2/CmdResult.msg
// DO NOT EDIT!


#ifndef M100_V2_MESSAGE_CMDRESULT_H
#define M100_V2_MESSAGE_CMDRESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace m100_v2
{
template <class ContainerAllocator>
struct CmdResult_
{
  typedef CmdResult_<ContainerAllocator> Type;

  CmdResult_()
    : component()
    , command()
    , status(false)  {
    }
  CmdResult_(const ContainerAllocator& _alloc)
    : component(_alloc)
    , command(_alloc)
    , status(false)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _component_type;
  _component_type component;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _command_type;
  _command_type command;

   typedef uint8_t _status_type;
  _status_type status;





  typedef boost::shared_ptr< ::m100_v2::CmdResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::m100_v2::CmdResult_<ContainerAllocator> const> ConstPtr;

}; // struct CmdResult_

typedef ::m100_v2::CmdResult_<std::allocator<void> > CmdResult;

typedef boost::shared_ptr< ::m100_v2::CmdResult > CmdResultPtr;
typedef boost::shared_ptr< ::m100_v2::CmdResult const> CmdResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::m100_v2::CmdResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::m100_v2::CmdResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace m100_v2

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'm100_v2': ['/home/uav/ROS/m100/src/m100_v2/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::m100_v2::CmdResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::m100_v2::CmdResult_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::m100_v2::CmdResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::m100_v2::CmdResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::m100_v2::CmdResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::m100_v2::CmdResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::m100_v2::CmdResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "50fc9051b66559e2902987e4c3f3c68f";
  }

  static const char* value(const ::m100_v2::CmdResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x50fc9051b66559e2ULL;
  static const uint64_t static_value2 = 0x902987e4c3f3c68fULL;
};

template<class ContainerAllocator>
struct DataType< ::m100_v2::CmdResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "m100_v2/CmdResult";
  }

  static const char* value(const ::m100_v2::CmdResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::m100_v2::CmdResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string component\n\
string command\n\
bool status\n\
";
  }

  static const char* value(const ::m100_v2::CmdResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::m100_v2::CmdResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.component);
      stream.next(m.command);
      stream.next(m.status);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CmdResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::m100_v2::CmdResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::m100_v2::CmdResult_<ContainerAllocator>& v)
  {
    s << indent << "component: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.component);
    s << indent << "command: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.command);
    s << indent << "status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.status);
  }
};

} // namespace message_operations
} // namespace ros

#endif // M100_V2_MESSAGE_CMDRESULT_H