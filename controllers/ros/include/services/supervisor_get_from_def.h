#ifndef WEBOTS_ROS_MESSAGE_SUPERVISOR_GET_FROM_DEF_H
#define WEBOTS_ROS_MESSAGE_SUPERVISOR_GET_FROM_DEF_H

#include "ros/service_traits.h"


#include "supervisor_get_from_defRequest.h"
#include "supervisor_get_from_defResponse.h"


namespace webots_ros
{

struct supervisor_get_from_def
{

typedef supervisor_get_from_defRequest Request;
typedef supervisor_get_from_defResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

};
} // namespace webots_ros


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::webots_ros::supervisor_get_from_def > {
  static const char* value()
  {
    return "ac26007a2c83bd1b38318cda0f4ce627";
  }

  static const char* value(const ::webots_ros::supervisor_get_from_def&) { return value(); }
};

template<>
struct DataType< ::webots_ros::supervisor_get_from_def > {
  static const char* value()
  {
    return "webots_ros/supervisor_get_from_def";
  }

  static const char* value(const ::webots_ros::supervisor_get_from_def&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::supervisor_get_from_defRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::supervisor_get_from_def >::value();
  }
  static const char* value(const ::webots_ros::supervisor_get_from_defRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::supervisor_get_from_defRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::supervisor_get_from_def >::value();
  }
  static const char* value(const ::webots_ros::supervisor_get_from_defRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::supervisor_get_from_defResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::supervisor_get_from_def >::value();
  }
  static const char* value(const ::webots_ros::supervisor_get_from_defResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::supervisor_get_from_defResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::supervisor_get_from_def >::value();
  }
  static const char* value(const ::webots_ros::supervisor_get_from_defResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_SUPERVISOR_GET_FROM_DEF_H
