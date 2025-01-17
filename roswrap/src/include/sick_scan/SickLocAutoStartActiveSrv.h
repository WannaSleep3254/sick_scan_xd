#include "sick_scan/sick_scan_base.h" /* Base definitions included in all header files, added by add_sick_scan_base_header.py. Do not edit this line. */
// Generated by gencpp from file sick_scan/SickLocAutoStartActiveSrv.msg
// DO NOT EDIT!


#ifndef SICK_SCAN_MESSAGE_SICKLOCAUTOSTARTACTIVESRV_H
#define SICK_SCAN_MESSAGE_SICKLOCAUTOSTARTACTIVESRV_H

#include <ros/service_traits.h>


#include <sick_scan/SickLocAutoStartActiveSrvRequest.h>
#include <sick_scan/SickLocAutoStartActiveSrvResponse.h>


namespace sick_scan
{

struct SickLocAutoStartActiveSrv
{

typedef SickLocAutoStartActiveSrvRequest Request;
typedef SickLocAutoStartActiveSrvResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SickLocAutoStartActiveSrv
} // namespace sick_scan


namespace roswrap
{
namespace service_traits
{


template<>
struct MD5Sum< ::sick_scan::SickLocAutoStartActiveSrv > {
  static const char* value()
  {
    return "9bb3f90ef7a4dde50a9193067d4298d5";
  }

  static const char* value(const ::sick_scan::SickLocAutoStartActiveSrv&) { return value(); }
};

template<>
struct DataType< ::sick_scan::SickLocAutoStartActiveSrv > {
  static const char* value()
  {
    return "sick_scan/SickLocAutoStartActiveSrv";
  }

  static const char* value(const ::sick_scan::SickLocAutoStartActiveSrv&) { return value(); }
};


// service_traits::MD5Sum< ::sick_scan::SickLocAutoStartActiveSrvRequest> should match
// service_traits::MD5Sum< ::sick_scan::SickLocAutoStartActiveSrv >
template<>
struct MD5Sum< ::sick_scan::SickLocAutoStartActiveSrvRequest>
{
  static const char* value()
  {
    return MD5Sum< ::sick_scan::SickLocAutoStartActiveSrv >::value();
  }
  static const char* value(const ::sick_scan::SickLocAutoStartActiveSrvRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::sick_scan::SickLocAutoStartActiveSrvRequest> should match
// service_traits::DataType< ::sick_scan::SickLocAutoStartActiveSrv >
template<>
struct DataType< ::sick_scan::SickLocAutoStartActiveSrvRequest>
{
  static const char* value()
  {
    return DataType< ::sick_scan::SickLocAutoStartActiveSrv >::value();
  }
  static const char* value(const ::sick_scan::SickLocAutoStartActiveSrvRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::sick_scan::SickLocAutoStartActiveSrvResponse> should match
// service_traits::MD5Sum< ::sick_scan::SickLocAutoStartActiveSrv >
template<>
struct MD5Sum< ::sick_scan::SickLocAutoStartActiveSrvResponse>
{
  static const char* value()
  {
    return MD5Sum< ::sick_scan::SickLocAutoStartActiveSrv >::value();
  }
  static const char* value(const ::sick_scan::SickLocAutoStartActiveSrvResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::sick_scan::SickLocAutoStartActiveSrvResponse> should match
// service_traits::DataType< ::sick_scan::SickLocAutoStartActiveSrv >
template<>
struct DataType< ::sick_scan::SickLocAutoStartActiveSrvResponse>
{
  static const char* value()
  {
    return DataType< ::sick_scan::SickLocAutoStartActiveSrv >::value();
  }
  static const char* value(const ::sick_scan::SickLocAutoStartActiveSrvResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace roswrap

#endif // SICK_SCAN_MESSAGE_SICKLOCAUTOSTARTACTIVESRV_H
