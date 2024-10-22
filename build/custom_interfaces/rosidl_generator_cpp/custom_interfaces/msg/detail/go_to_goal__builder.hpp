// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:msg/GoToGoal.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__GO_TO_GOAL__BUILDER_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__GO_TO_GOAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/msg/detail/go_to_goal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_GoToGoal_goal_position
{
public:
  explicit Init_GoToGoal_goal_position(::custom_interfaces::msg::GoToGoal & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::msg::GoToGoal goal_position(::custom_interfaces::msg::GoToGoal::_goal_position_type arg)
  {
    msg_.goal_position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::msg::GoToGoal msg_;
};

class Init_GoToGoal_goal_name
{
public:
  Init_GoToGoal_goal_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoToGoal_goal_position goal_name(::custom_interfaces::msg::GoToGoal::_goal_name_type arg)
  {
    msg_.goal_name = std::move(arg);
    return Init_GoToGoal_goal_position(msg_);
  }

private:
  ::custom_interfaces::msg::GoToGoal msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::msg::GoToGoal>()
{
  return custom_interfaces::msg::builder::Init_GoToGoal_goal_name();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__GO_TO_GOAL__BUILDER_HPP_
