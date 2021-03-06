#ifndef WEBOTS_ROS_MESSAGE_DISPLAY_FILL_POLYGON_H
#define WEBOTS_ROS_MESSAGE_DISPLAY_FILL_POLYGON_H

#include "ros/service_traits.h"


#include "display_fill_polygonRequest.h"
#include "display_fill_polygonResponse.h"


namespace webots_ros
{

struct display_fill_polygon
{

typedef display_fill_polygonRequest Request;
typedef display_fill_polygonResponse Response;
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
struct MD5Sum< ::webots_ros::display_fill_polygon > {
  static const char* value()
  {
    return "dfa1f0ed4de4cc45db83bc60add40eb6";
  }

  static const char* value(const ::webots_ros::display_fill_polygon&) { return value(); }
};

template<>
struct DataType< ::webots_ros::display_fill_polygon > {
  static const char* value()
  {
    return "webots_ros/display_fill_polygon";
  }

  static const char* value(const ::webots_ros::display_fill_polygon&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::display_fill_polygonRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::display_fill_polygon >::value();
  }
  static const char* value(const ::webots_ros::display_fill_polygonRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::display_fill_polygonRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::display_fill_polygon >::value();
  }
  static const char* value(const ::webots_ros::display_fill_polygonRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::display_fill_polygonResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::display_fill_polygon >::value();
  }
  static const char* value(const ::webots_ros::display_fill_polygonResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::display_fill_polygonResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::display_fill_polygon >::value();
  }
  static const char* value(const ::webots_ros::display_fill_polygonResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_DISPLAY_FILL_POLYGON_H
