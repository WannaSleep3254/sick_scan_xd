#include "sick_scan/sick_scan_base.h" /* Base definitions included in all header files, added by add_sick_scan_base_header.py. Do not edit this line. */
// Generated by gencpp from file sick_scan/SCrebootSrv.msg
// DO NOT EDIT!


#ifndef SICK_SCAN_MESSAGE_SCREBOOTSRV_H
#define SICK_SCAN_MESSAGE_SCREBOOTSRV_H

#include <ros/service_traits.h>


#include <sick_scan/SCrebootSrvRequest.h>
#include <sick_scan/SCrebootSrvResponse.h>


namespace sick_scan
{

struct SCrebootSrv
{

typedef SCrebootSrvRequest Request;
typedef SCrebootSrvResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SCrebootSrv
} // namespace sick_scan


namespace roswrap
{
namespace service_traits
{


template<>
struct MD5Sum< ::sick_scan::SCrebootSrv > {
  static const char* value()
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const ::sick_scan::SCrebootSrv&) { return value(); }
};

template<>
struct DataType< ::sick_scan::SCrebootSrv > {
  static const char* value()
  {
    return "sick_scan/SCrebootSrv";
  }

  static const char* value(const ::sick_scan::SCrebootSrv&) { return value(); }
};


// service_traits::MD5Sum< ::sick_scan::SCrebootSrvRequest> should match
// service_traits::MD5Sum< ::sick_scan::SCrebootSrv >
template<>
struct MD5Sum< ::sick_scan::SCrebootSrvRequest>
{
  static const char* value()
  {
    return MD5Sum< ::sick_scan::SCrebootSrv >::value();
  }
  static const char* value(const ::sick_scan::SCrebootSrvRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::sick_scan::SCrebootSrvRequest> should match
// service_traits::DataType< ::sick_scan::SCrebootSrv >
template<>
struct DataType< ::sick_scan::SCrebootSrvRequest>
{
  static const char* value()
  {
    return DataType< ::sick_scan::SCrebootSrv >::value();
  }
  static const char* value(const ::sick_scan::SCrebootSrvRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::sick_scan::SCrebootSrvResponse> should match
// service_traits::MD5Sum< ::sick_scan::SCrebootSrv >
template<>
struct MD5Sum< ::sick_scan::SCrebootSrvResponse>
{
  static const char* value()
  {
    return MD5Sum< ::sick_scan::SCrebootSrv >::value();
  }
  static const char* value(const ::sick_scan::SCrebootSrvResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::sick_scan::SCrebootSrvResponse> should match
// service_traits::DataType< ::sick_scan::SCrebootSrv >
template<>
struct DataType< ::sick_scan::SCrebootSrvResponse>
{
  static const char* value()
  {
    return DataType< ::sick_scan::SCrebootSrv >::value();
  }
  static const char* value(const ::sick_scan::SCrebootSrvResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace roswrap

#endif // SICK_SCAN_MESSAGE_SCREBOOTSRV_H
