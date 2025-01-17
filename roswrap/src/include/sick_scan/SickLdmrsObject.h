#include "sick_scan/sick_scan_base.h" /* Base definitions included in all header files, added by add_sick_scan_base_header.py. Do not edit this line. */
// Generated by gencpp from file sick_scan/SickLdmrsObject.msg
// DO NOT EDIT!


#ifndef SICK_SCAN_MESSAGE_SICKLDMRSOBJECT_H
#define SICK_SCAN_MESSAGE_SICKLDMRSOBJECT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/TwistWithCovariance.h>
#include <geometry_msgs/Pose.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/PoseWithCovariance.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Point.h>

namespace sick_scan
{
template <class ContainerAllocator>
struct SickLdmrsObject_
{
  typedef SickLdmrsObject_<ContainerAllocator> Type;

  SickLdmrsObject_()
    : id(0)
    , tracking_time()
    , last_seen()
    , velocity()
    , bounding_box_center()
    , bounding_box_size()
    , object_box_center()
    , object_box_size()
    , contour_points()  {
    }
  SickLdmrsObject_(const ContainerAllocator& _alloc)
    : id(0)
    , tracking_time()
    , last_seen()
    , velocity(_alloc)
    , bounding_box_center(_alloc)
    , bounding_box_size(_alloc)
    , object_box_center(_alloc)
    , object_box_size(_alloc)
    , contour_points(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _id_type;
  _id_type id;

   typedef ros::Time _tracking_time_type;
  _tracking_time_type tracking_time;

   typedef ros::Time _last_seen_type;
  _last_seen_type last_seen;

   typedef  ::geometry_msgs::TwistWithCovariance_<ContainerAllocator>  _velocity_type;
  _velocity_type velocity;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _bounding_box_center_type;
  _bounding_box_center_type bounding_box_center;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _bounding_box_size_type;
  _bounding_box_size_type bounding_box_size;

   typedef  ::geometry_msgs::PoseWithCovariance_<ContainerAllocator>  _object_box_center_type;
  _object_box_center_type object_box_center;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _object_box_size_type;
  _object_box_size_type object_box_size;

   typedef std::vector< ::geometry_msgs::Point_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Point_<ContainerAllocator> >::other >  _contour_points_type;
  _contour_points_type contour_points;





  typedef std::shared_ptr< ::sick_scan::SickLdmrsObject_<ContainerAllocator> > Ptr;
  typedef std::shared_ptr< ::sick_scan::SickLdmrsObject_<ContainerAllocator> const> ConstPtr;

}; // struct SickLdmrsObject_

typedef ::sick_scan::SickLdmrsObject_<std::allocator<void> > SickLdmrsObject;

typedef std::shared_ptr< ::sick_scan::SickLdmrsObject > SickLdmrsObjectPtr;
typedef std::shared_ptr< ::sick_scan::SickLdmrsObject const> SickLdmrsObjectConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sick_scan::SickLdmrsObject_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sick_scan::SickLdmrsObject_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::sick_scan::SickLdmrsObject_<ContainerAllocator1> & lhs, const ::sick_scan::SickLdmrsObject_<ContainerAllocator2> & rhs)
{
  return lhs.id == rhs.id &&
    lhs.tracking_time == rhs.tracking_time &&
    lhs.last_seen == rhs.last_seen &&
    lhs.velocity == rhs.velocity &&
    lhs.bounding_box_center == rhs.bounding_box_center &&
    lhs.bounding_box_size == rhs.bounding_box_size &&
    lhs.object_box_center == rhs.object_box_center &&
    lhs.object_box_size == rhs.object_box_size &&
    lhs.contour_points == rhs.contour_points;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::sick_scan::SickLdmrsObject_<ContainerAllocator1> & lhs, const ::sick_scan::SickLdmrsObject_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace sick_scan

namespace roswrap
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::sick_scan::SickLdmrsObject_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sick_scan::SickLdmrsObject_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sick_scan::SickLdmrsObject_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sick_scan::SickLdmrsObject_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sick_scan::SickLdmrsObject_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sick_scan::SickLdmrsObject_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sick_scan::SickLdmrsObject_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a5d0f2d250163ffa0098d0fc8218fc4a";
  }

  static const char* value(const ::sick_scan::SickLdmrsObject_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa5d0f2d250163ffaULL;
  static const uint64_t static_value2 = 0x0098d0fc8218fc4aULL;
};

template<class ContainerAllocator>
struct DataType< ::sick_scan::SickLdmrsObject_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sick_scan/SickLdmrsObject";
  }

  static const char* value(const ::sick_scan::SickLdmrsObject_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sick_scan::SickLdmrsObject_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 id\n"
"\n"
"# ROS-1:\n"
"time tracking_time                      # since when the object is tracked\n"
"time last_seen\n"
"\n"
"# ROS-2:\n"
"#builtin_interfaces/Time tracking_time  # since when the object is tracked\n"
"#builtin_interfaces/Time last_seen\n"
"\n"
"geometry_msgs/TwistWithCovariance velocity\n"
"\n"
"geometry_msgs/Pose bounding_box_center\n"
"geometry_msgs/Vector3 bounding_box_size\n"
"\n"
"geometry_msgs/PoseWithCovariance object_box_center\n"
"geometry_msgs/Vector3 object_box_size\n"
"\n"
"geometry_msgs/Point[] contour_points\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/TwistWithCovariance\n"
"# This expresses velocity in free space with uncertainty.\n"
"\n"
"Twist twist\n"
"\n"
"# Row-major representation of the 6x6 covariance matrix\n"
"# The orientation parameters use a fixed-axis representation.\n"
"# In order, the parameters are:\n"
"# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)\n"
"float64[36] covariance\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Twist\n"
"# This expresses velocity in free space broken into its linear and angular parts.\n"
"Vector3  linear\n"
"Vector3  angular\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/PoseWithCovariance\n"
"# This represents a pose in free space with uncertainty.\n"
"\n"
"Pose pose\n"
"\n"
"# Row-major representation of the 6x6 covariance matrix\n"
"# The orientation parameters use a fixed-axis representation.\n"
"# In order, the parameters are:\n"
"# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)\n"
"float64[36] covariance\n"
;
  }

  static const char* value(const ::sick_scan::SickLdmrsObject_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace roswrap

namespace roswrap
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sick_scan::SickLdmrsObject_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.tracking_time);
      stream.next(m.last_seen);
      stream.next(m.velocity);
      stream.next(m.bounding_box_center);
      stream.next(m.bounding_box_size);
      stream.next(m.object_box_center);
      stream.next(m.object_box_size);
      stream.next(m.contour_points);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SickLdmrsObject_

} // namespace serialization
} // namespace roswrap

namespace roswrap
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sick_scan::SickLdmrsObject_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sick_scan::SickLdmrsObject_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.id);
    s << indent << "tracking_time: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.tracking_time);
    s << indent << "last_seen: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.last_seen);
    s << indent << "velocity: ";
    s << std::endl;
    Printer< ::geometry_msgs::TwistWithCovariance_<ContainerAllocator> >::stream(s, indent + "  ", v.velocity);
    s << indent << "bounding_box_center: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.bounding_box_center);
    s << indent << "bounding_box_size: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.bounding_box_size);
    s << indent << "object_box_center: ";
    s << std::endl;
    Printer< ::geometry_msgs::PoseWithCovariance_<ContainerAllocator> >::stream(s, indent + "  ", v.object_box_center);
    s << indent << "object_box_size: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.object_box_size);
    s << indent << "contour_points[]" << std::endl;
    for (size_t i = 0; i < v.contour_points.size(); ++i)
    {
      s << indent << "  contour_points[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "    ", v.contour_points[i]);
    }
  }
};

} // namespace message_operations
} // namespace roswrap

#endif // SICK_SCAN_MESSAGE_SICKLDMRSOBJECT_H
