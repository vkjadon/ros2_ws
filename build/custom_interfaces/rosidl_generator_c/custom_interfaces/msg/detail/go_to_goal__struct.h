// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:msg/GoToGoal.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__GO_TO_GOAL__STRUCT_H_
#define CUSTOM_INTERFACES__MSG__DETAIL__GO_TO_GOAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'goal_name'
#include "rosidl_runtime_c/string.h"
// Member 'goal_position'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/GoToGoal in the package custom_interfaces.
typedef struct custom_interfaces__msg__GoToGoal
{
  rosidl_runtime_c__String goal_name;
  geometry_msgs__msg__Point goal_position;
} custom_interfaces__msg__GoToGoal;

// Struct for a sequence of custom_interfaces__msg__GoToGoal.
typedef struct custom_interfaces__msg__GoToGoal__Sequence
{
  custom_interfaces__msg__GoToGoal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__msg__GoToGoal__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__GO_TO_GOAL__STRUCT_H_
