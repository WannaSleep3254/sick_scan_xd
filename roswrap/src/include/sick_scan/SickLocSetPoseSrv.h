#include "sick_scan/sick_scan_base.h" /* Base definitions included in all header files, added by add_sick_scan_base_header.py. Do not edit this line. */
// Generated by gencpp from file sick_scan/SickLocSetPoseSrv.msg
// DO NOT EDIT!


#ifndef SICK_SCAN_MESSAGE_SICKLOCSETPOSESRV_H
#define SICK_SCAN_MESSAGE_SICKLOCSETPOSESRV_H

#include <ros/service_traits.h>


#include <sick_scan/SickLocSetPoseSrvRequest.h>
#include <sick_scan/SickLocSetPoseSrvResponse.h>


namespace sick_scan
{

struct SickLocSetPoseSrv
{

typedef SickLocSetPoseSrvRequest Request;
typedef SickLocSetPoseSrvResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SickLocSetPoseSrv
} // namespace sick_scan


namespace roswrap
{
namespace service_traits
{


template<>
struct MD5Sum< ::sick_scan::SickLocSetPoseSrv > {
  static const char* value()
  {
    return "11bcade26cc02b7bbcb448a2abedd38e";
  }

  static const char* value(const ::sick_scan::SickLocSetPoseSrv&) { return value(); }
};

template<>
struct DataType< ::sick_scan::SickLocSetPoseSrv > {
  static const char* value()
  {
    return "sick_scan/SickLocSetPoseSrv";
  }

  static const char* value(const ::sick_scan::SickLocSetPoseSrv&) { return value(); }
};


// service_traits::MD5Sum< ::sick_scan::SickLocSetPoseSrvRequest> should match
// service_traits::MD5Sum< ::sick_scan::SickLocSetPoseSrv >
template<>
struct MD5Sum< ::sick_scan::SickLocSetPoseSrvRequest>
{
  static const char* value()
  {
    return MD5Sum< ::sick_scan::SickLocSetPoseSrv >::value();
  }
  static const char* value(const ::sick_scan::SickLocSetPoseSrvRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::sick_scan::SickLocSetPoseSrvRequest> should match
// service_traits::DataType< ::sick_scan::SickLocSetPoseSrv >
template<>
struct DataType< ::sick_scan::SickLocSetPoseSrvRequest>
{
  static const char* value()
  {
    return DataType< ::sick_scan::SickLocSetPoseSrv >::value();
  }
  static const char* value(const ::sick_scan::SickLocSetPoseSrvRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::sick_scan::SickLocSetPoseSrvResponse> should match
// service_traits::MD5Sum< ::sick_scan::SickLocSetPoseSrv >
template<>
struct MD5Sum< ::sick_scan::SickLocSetPoseSrvResponse>
{
  static const char* value()
  {
    return MD5Sum< ::sick_scan::SickLocSetPoseSrv >::value();
  }
  static const char* value(const ::sick_scan::SickLocSetPoseSrvResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::sick_scan::SickLocSetPoseSrvResponse> should match
// service_traits::DataType< ::sick_scan::SickLocSetPoseSrv >
template<>
struct DataType< ::sick_scan::SickLocSetPoseSrvResponse>
{
  static const char* value()
  {
    return DataType< ::sick_scan::SickLocSetPoseSrv >::value();
  }
  static const char* value(const ::sick_scan::SickLocSetPoseSrvResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace roswrap

#endif // SICK_SCAN_MESSAGE_SICKLOCSETPOSESRV_H
