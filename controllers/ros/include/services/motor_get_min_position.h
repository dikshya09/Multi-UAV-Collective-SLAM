#ifndef WEBOTS_ROS_MESSAGE_MOTOR_GET_MIN_POSITION_H
#define WEBOTS_ROS_MESSAGE_MOTOR_GET_MIN_POSITION_H

#include "ros/service_traits.h"


#include "motor_get_min_positionRequest.h"
#include "motor_get_min_positionResponse.h"


namespace webots_ros
{

struct motor_get_min_position
{

typedef motor_get_min_positionRequest Request;
typedef motor_get_min_positionResponse Response;
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
struct MD5Sum< ::webots_ros::motor_get_min_position > {
  static const char* value()
  {
    return "8dd818679eb62d4bbff36914669e9367";
  }

  static const char* value(const ::webots_ros::motor_get_min_position&) { return value(); }
};

template<>
struct DataType< ::webots_ros::motor_get_min_position > {
  static const char* value()
  {
    return "webots_ros/motor_get_min_position";
  }

  static const char* value(const ::webots_ros::motor_get_min_position&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::motor_get_min_positionRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::motor_get_min_position >::value();
  }
  static const char* value(const ::webots_ros::motor_get_min_positionRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::motor_get_min_positionRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::motor_get_min_position >::value();
  }
  static const char* value(const ::webots_ros::motor_get_min_positionRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::motor_get_min_positionResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::motor_get_min_position >::value();
  }
  static const char* value(const ::webots_ros::motor_get_min_positionResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::motor_get_min_positionResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::motor_get_min_position >::value();
  }
  static const char* value(const ::webots_ros::motor_get_min_positionResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_MOTOR_GET_MIN_POSITION_H
