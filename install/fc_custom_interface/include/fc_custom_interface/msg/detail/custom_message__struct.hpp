// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fc_custom_interface:msg/CustomMessage.idl
// generated code does not contain a copyright notice

#ifndef FC_CUSTOM_INTERFACE__MSG__DETAIL__CUSTOM_MESSAGE__STRUCT_HPP_
#define FC_CUSTOM_INTERFACE__MSG__DETAIL__CUSTOM_MESSAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__fc_custom_interface__msg__CustomMessage __attribute__((deprecated))
#else
# define DEPRECATED__fc_custom_interface__msg__CustomMessage __declspec(deprecated)
#endif

namespace fc_custom_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CustomMessage_
{
  using Type = CustomMessage_<ContainerAllocator>;

  explicit CustomMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->death_count = 0l;
      this->name = "";
      this->is_alive = false;
    }
  }

  explicit CustomMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->death_count = 0l;
      this->name = "";
      this->is_alive = false;
    }
  }

  // field types and members
  using _death_count_type =
    int32_t;
  _death_count_type death_count;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _is_alive_type =
    bool;
  _is_alive_type is_alive;
  using _persons_alive_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _persons_alive_type persons_alive;

  // setters for named parameter idiom
  Type & set__death_count(
    const int32_t & _arg)
  {
    this->death_count = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__is_alive(
    const bool & _arg)
  {
    this->is_alive = _arg;
    return *this;
  }
  Type & set__persons_alive(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->persons_alive = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fc_custom_interface::msg::CustomMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const fc_custom_interface::msg::CustomMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fc_custom_interface::msg::CustomMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fc_custom_interface::msg::CustomMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fc_custom_interface::msg::CustomMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fc_custom_interface::msg::CustomMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fc_custom_interface::msg::CustomMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fc_custom_interface::msg::CustomMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fc_custom_interface::msg::CustomMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fc_custom_interface::msg::CustomMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fc_custom_interface__msg__CustomMessage
    std::shared_ptr<fc_custom_interface::msg::CustomMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fc_custom_interface__msg__CustomMessage
    std::shared_ptr<fc_custom_interface::msg::CustomMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CustomMessage_ & other) const
  {
    if (this->death_count != other.death_count) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->is_alive != other.is_alive) {
      return false;
    }
    if (this->persons_alive != other.persons_alive) {
      return false;
    }
    return true;
  }
  bool operator!=(const CustomMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CustomMessage_

// alias to use template instance with default allocator
using CustomMessage =
  fc_custom_interface::msg::CustomMessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fc_custom_interface

#endif  // FC_CUSTOM_INTERFACE__MSG__DETAIL__CUSTOM_MESSAGE__STRUCT_HPP_
