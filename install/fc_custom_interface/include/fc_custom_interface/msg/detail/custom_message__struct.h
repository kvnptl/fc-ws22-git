// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fc_custom_interface:msg/CustomMessage.idl
// generated code does not contain a copyright notice

#ifndef FC_CUSTOM_INTERFACE__MSG__DETAIL__CUSTOM_MESSAGE__STRUCT_H_
#define FC_CUSTOM_INTERFACE__MSG__DETAIL__CUSTOM_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'persons_alive'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/CustomMessage in the package fc_custom_interface.
typedef struct fc_custom_interface__msg__CustomMessage
{
  int32_t death_count;
  rosidl_runtime_c__String name;
  bool is_alive;
  rosidl_runtime_c__String__Sequence persons_alive;
} fc_custom_interface__msg__CustomMessage;

// Struct for a sequence of fc_custom_interface__msg__CustomMessage.
typedef struct fc_custom_interface__msg__CustomMessage__Sequence
{
  fc_custom_interface__msg__CustomMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fc_custom_interface__msg__CustomMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FC_CUSTOM_INTERFACE__MSG__DETAIL__CUSTOM_MESSAGE__STRUCT_H_
