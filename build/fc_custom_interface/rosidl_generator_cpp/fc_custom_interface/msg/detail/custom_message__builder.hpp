// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fc_custom_interface:msg/CustomMessage.idl
// generated code does not contain a copyright notice

#ifndef FC_CUSTOM_INTERFACE__MSG__DETAIL__CUSTOM_MESSAGE__BUILDER_HPP_
#define FC_CUSTOM_INTERFACE__MSG__DETAIL__CUSTOM_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fc_custom_interface/msg/detail/custom_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fc_custom_interface
{

namespace msg
{

namespace builder
{

class Init_CustomMessage_persons_alive
{
public:
  explicit Init_CustomMessage_persons_alive(::fc_custom_interface::msg::CustomMessage & msg)
  : msg_(msg)
  {}
  ::fc_custom_interface::msg::CustomMessage persons_alive(::fc_custom_interface::msg::CustomMessage::_persons_alive_type arg)
  {
    msg_.persons_alive = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fc_custom_interface::msg::CustomMessage msg_;
};

class Init_CustomMessage_is_alive
{
public:
  explicit Init_CustomMessage_is_alive(::fc_custom_interface::msg::CustomMessage & msg)
  : msg_(msg)
  {}
  Init_CustomMessage_persons_alive is_alive(::fc_custom_interface::msg::CustomMessage::_is_alive_type arg)
  {
    msg_.is_alive = std::move(arg);
    return Init_CustomMessage_persons_alive(msg_);
  }

private:
  ::fc_custom_interface::msg::CustomMessage msg_;
};

class Init_CustomMessage_name
{
public:
  explicit Init_CustomMessage_name(::fc_custom_interface::msg::CustomMessage & msg)
  : msg_(msg)
  {}
  Init_CustomMessage_is_alive name(::fc_custom_interface::msg::CustomMessage::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_CustomMessage_is_alive(msg_);
  }

private:
  ::fc_custom_interface::msg::CustomMessage msg_;
};

class Init_CustomMessage_death_count
{
public:
  Init_CustomMessage_death_count()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CustomMessage_name death_count(::fc_custom_interface::msg::CustomMessage::_death_count_type arg)
  {
    msg_.death_count = std::move(arg);
    return Init_CustomMessage_name(msg_);
  }

private:
  ::fc_custom_interface::msg::CustomMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fc_custom_interface::msg::CustomMessage>()
{
  return fc_custom_interface::msg::builder::Init_CustomMessage_death_count();
}

}  // namespace fc_custom_interface

#endif  // FC_CUSTOM_INTERFACE__MSG__DETAIL__CUSTOM_MESSAGE__BUILDER_HPP_
