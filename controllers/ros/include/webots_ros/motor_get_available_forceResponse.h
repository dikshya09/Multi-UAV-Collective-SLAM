#ifndef WEBOTS_ROS_MESSAGE_MOTOR_GET_AVAILABLE_FORCERESPONSE_H
#define WEBOTS_ROS_MESSAGE_MOTOR_GET_AVAILABLE_FORCERESPONSE_H


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
struct motor_get_available_forceResponse_
{
  typedef motor_get_available_forceResponse_<ContainerAllocator> Type;

  motor_get_available_forceResponse_()
    : force(0.0)  {
    }
  motor_get_available_forceResponse_(const ContainerAllocator& _alloc)
    : force(0.0)  {
    }


   typedef double _force_type;
  _force_type force;




  typedef boost::shared_ptr< ::webots_ros::motor_get_available_forceResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::webots_ros::motor_get_available_forceResponse_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

};

typedef ::webots_ros::motor_get_available_forceResponse_<std::allocator<void> > motor_get_available_forceResponse;

typedef boost::shared_ptr< ::webots_ros::motor_get_available_forceResponse > motor_get_available_forceResponsePtr;
typedef boost::shared_ptr< ::webots_ros::motor_get_available_forceResponse const> motor_get_available_forceResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::webots_ros::motor_get_available_forceResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::webots_ros::motor_get_available_forceResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace webots_ros

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/groovy/share/std_msgs/msg'], 'webots_ros': ['/home/simon/my_Webots_Projects/controllers/ros_controller/catkin_ws/src/webots_ros/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::webots_ros::motor_get_available_forceResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_ros::motor_get_available_forceResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_ros::motor_get_available_forceResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_ros::motor_get_available_forceResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::motor_get_available_forceResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::motor_get_available_forceResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::webots_ros::motor_get_available_forceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "627bacafebe3185005fa9040cedf1781";
  }

  static const char* value(const ::webots_ros::motor_get_available_forceResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0147e4f36cba5cdaULL;
  static const uint64_t static_value2 = 0x7fa39c089e493413ULL;
};

template<class ContainerAllocator>
struct DataType< ::webots_ros::motor_get_available_forceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "webots_ros/motor_get_available_forceResponse";
  }

  static const char* value(const ::webots_ros::motor_get_available_forceResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::webots_ros::motor_get_available_forceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 force\n\\n\
\n\
";
  }

  static const char* value(const ::webots_ros::motor_get_available_forceResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::webots_ros::motor_get_available_forceResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
            stream.next(m.force);

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
struct Printer< ::webots_ros::motor_get_available_forceResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::webots_ros::motor_get_available_forceResponse_<ContainerAllocator>& v)
  {
        s << indent << "force: ";
    Printer<double>::stream(s, indent + "  ", v.force);

  }
};

} // namespace message_operations
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_MOTOR_GET_AVAILABLE_FORCERESPONSE_H
