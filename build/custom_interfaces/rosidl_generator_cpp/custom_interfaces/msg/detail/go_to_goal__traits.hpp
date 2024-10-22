// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_interfaces:msg/GoToGoal.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__GO_TO_GOAL__TRAITS_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__GO_TO_GOAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_interfaces/msg/detail/go_to_goal__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'goal_position'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace custom_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const GoToGoal & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_name
  {
    out << "goal_name: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_name, out);
    out << ", ";
  }

  // member: goal_position
  {
    out << "goal_position: ";
    to_flow_style_yaml(msg.goal_position, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GoToGoal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_name: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_name, out);
    out << "\n";
  }

  // member: goal_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_position:\n";
    to_block_style_yaml(msg.goal_position, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GoToGoal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace custom_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use custom_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_interfaces::msg::GoToGoal & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const custom_interfaces::msg::GoToGoal & msg)
{
  return custom_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<custom_interfaces::msg::GoToGoal>()
{
  return "custom_interfaces::msg::GoToGoal";
}

template<>
inline const char * name<custom_interfaces::msg::GoToGoal>()
{
  return "custom_interfaces/msg/GoToGoal";
}

template<>
struct has_fixed_size<custom_interfaces::msg::GoToGoal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_interfaces::msg::GoToGoal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_interfaces::msg::GoToGoal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__GO_TO_GOAL__TRAITS_HPP_
