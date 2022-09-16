// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fc_custom_interface:msg/CustomMessage.idl
// generated code does not contain a copyright notice

#ifndef FC_CUSTOM_INTERFACE__MSG__DETAIL__CUSTOM_MESSAGE__TRAITS_HPP_
#define FC_CUSTOM_INTERFACE__MSG__DETAIL__CUSTOM_MESSAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "fc_custom_interface/msg/detail/custom_message__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace fc_custom_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const CustomMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: death_count
  {
    out << "death_count: ";
    rosidl_generator_traits::value_to_yaml(msg.death_count, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: is_alive
  {
    out << "is_alive: ";
    rosidl_generator_traits::value_to_yaml(msg.is_alive, out);
    out << ", ";
  }

  // member: persons_alive
  {
    if (msg.persons_alive.size() == 0) {
      out << "persons_alive: []";
    } else {
      out << "persons_alive: [";
      size_t pending_items = msg.persons_alive.size();
      for (auto item : msg.persons_alive) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CustomMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: death_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "death_count: ";
    rosidl_generator_traits::value_to_yaml(msg.death_count, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: is_alive
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_alive: ";
    rosidl_generator_traits::value_to_yaml(msg.is_alive, out);
    out << "\n";
  }

  // member: persons_alive
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.persons_alive.size() == 0) {
      out << "persons_alive: []\n";
    } else {
      out << "persons_alive:\n";
      for (auto item : msg.persons_alive) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CustomMessage & msg, bool use_flow_style = false)
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

}  // namespace fc_custom_interface

namespace rosidl_generator_traits
{

[[deprecated("use fc_custom_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const fc_custom_interface::msg::CustomMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  fc_custom_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use fc_custom_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const fc_custom_interface::msg::CustomMessage & msg)
{
  return fc_custom_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<fc_custom_interface::msg::CustomMessage>()
{
  return "fc_custom_interface::msg::CustomMessage";
}

template<>
inline const char * name<fc_custom_interface::msg::CustomMessage>()
{
  return "fc_custom_interface/msg/CustomMessage";
}

template<>
struct has_fixed_size<fc_custom_interface::msg::CustomMessage>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<fc_custom_interface::msg::CustomMessage>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<fc_custom_interface::msg::CustomMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FC_CUSTOM_INTERFACE__MSG__DETAIL__CUSTOM_MESSAGE__TRAITS_HPP_
