#ifndef WEBOTS_ROS_MESSAGE_DISPLAY_DRAW_LINE_H
#define WEBOTS_ROS_MESSAGE_DISPLAY_DRAW_LINE_H

#include "ros/service_traits.h"


#include "display_draw_lineRequest.h"
#include "display_draw_lineResponse.h"


namespace webots_ros
{

struct display_draw_line
{

typedef display_draw_lineRequest Request;
typedef display_draw_lineResponse Response;
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
struct MD5Sum< ::webots_ros::display_draw_line > {
  static const char* value()
  {
    return "67df0d281bcb1579baa48d1202f84ebe";
  }

  static const char* value(const ::webots_ros::display_draw_line&) { return value(); }
};

template<>
struct DataType< ::webots_ros::display_draw_line > {
  static const char* value()
  {
    return "webots_ros/display_draw_line";
  }

  static const char* value(const ::webots_ros::display_draw_line&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::display_draw_lineRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::display_draw_line >::value();
  }
  static const char* value(const ::webots_ros::display_draw_lineRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::display_draw_lineRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::display_draw_line >::value();
  }
  static const char* value(const ::webots_ros::display_draw_lineRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::display_draw_lineResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::display_draw_line >::value();
  }
  static const char* value(const ::webots_ros::display_draw_lineResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::display_draw_lineResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::display_draw_line >::value();
  }
  static const char* value(const ::webots_ros::display_draw_lineResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_DISPLAY_DRAW_LINE_H
