#ifndef WEBOTS_ROS_MESSAGE_SUPERVISOR_SIMULATION_SET_MODEREQUEST_H
#define WEBOTS_ROS_MESSAGE_SUPERVISOR_SIMULATION_SET_MODEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include "ros/types.h"
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"



namespace webots_ros
{
template <class ContainerAllocator>
struct supervisor_simulation_set_modeRequest_
{
  typedef supervisor_simulation_set_modeRequest_<ContainerAllocator> Type;

  supervisor_simulation_set_modeRequest_()
    : mode(0)  {
    }
  supervisor_simulation_set_modeRequest_(const ContainerAllocator& _alloc)
    : mode(0)  {
    }

    
   typedef int32_t _mode_type;
  _mode_type mode;




  typedef boost::shared_ptr< ::webots_ros::supervisor_simulation_set_modeRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::webots_ros::supervisor_simulation_set_modeRequest_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

};

typedef ::webots_ros::supervisor_simulation_set_modeRequest_<std::allocator<void> > supervisor_simulation_set_modeRequest;

typedef boost::shared_ptr< ::webots_ros::supervisor_simulation_set_modeRequest > supervisor_simulation_set_modeRequestPtr;
typedef boost::shared_ptr< ::webots_ros::supervisor_simulation_set_modeRequest const> supervisor_simulation_set_modeRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::webots_ros::supervisor_simulation_set_modeRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::webots_ros::supervisor_simulation_set_modeRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace webots_ros

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/groovy/share/std_msgs/msg'], 'webots_ros

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::webots_ros::supervisor_simulation_set_modeRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_ros::supervisor_simulation_set_modeRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_ros::supervisor_simulation_set_modeRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_ros::supervisor_simulation_set_modeRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::supervisor_simulation_set_modeRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::supervisor_simulation_set_modeRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::webots_ros::supervisor_simulation_set_modeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "85eca10f52dfb9f021add50423bffa27";
  }

  static const char* value(const ::webots_ros::supervisor_simulation_set_modeRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf9df5232b65af94fULL;
  static const uint64_t static_value2 = 0x73f79fe6d84301bbULL;
};

template<class ContainerAllocator>
struct DataType< ::webots_ros::supervisor_simulation_set_modeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "webots_ros/supervisor_simulation_set_modeRequest";
  }

  static const char* value(const ::webots_ros::supervisor_simulation_set_modeRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::webots_ros::supervisor_simulation_set_modeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 mode\n\\n\
\n\
";
  }

  static const char* value(const ::webots_ros::supervisor_simulation_set_modeRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::webots_ros::supervisor_simulation_set_modeRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
            stream.next(m.mode);

    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  };

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::webots_ros::supervisor_simulation_set_modeRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::webots_ros::supervisor_simulation_set_modeRequest_<ContainerAllocator>& v)
  {
        s << indent << "mode: ";
    Printer<int32_t>::stream(s, indent + "  ", v.mode);

  }
};

} // namespace message_operations
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_SUPERVISOR_SIMULATION_SET_MODEREQUEST_H
