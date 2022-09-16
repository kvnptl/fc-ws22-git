// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fc_custom_interface:msg/CustomMessage.idl
// generated code does not contain a copyright notice
#include "fc_custom_interface/msg/detail/custom_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `persons_alive`
#include "rosidl_runtime_c/string_functions.h"

bool
fc_custom_interface__msg__CustomMessage__init(fc_custom_interface__msg__CustomMessage * msg)
{
  if (!msg) {
    return false;
  }
  // death_count
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    fc_custom_interface__msg__CustomMessage__fini(msg);
    return false;
  }
  // is_alive
  // persons_alive
  if (!rosidl_runtime_c__String__Sequence__init(&msg->persons_alive, 0)) {
    fc_custom_interface__msg__CustomMessage__fini(msg);
    return false;
  }
  return true;
}

void
fc_custom_interface__msg__CustomMessage__fini(fc_custom_interface__msg__CustomMessage * msg)
{
  if (!msg) {
    return;
  }
  // death_count
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // is_alive
  // persons_alive
  rosidl_runtime_c__String__Sequence__fini(&msg->persons_alive);
}

fc_custom_interface__msg__CustomMessage *
fc_custom_interface__msg__CustomMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fc_custom_interface__msg__CustomMessage * msg = (fc_custom_interface__msg__CustomMessage *)allocator.allocate(sizeof(fc_custom_interface__msg__CustomMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fc_custom_interface__msg__CustomMessage));
  bool success = fc_custom_interface__msg__CustomMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fc_custom_interface__msg__CustomMessage__destroy(fc_custom_interface__msg__CustomMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fc_custom_interface__msg__CustomMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fc_custom_interface__msg__CustomMessage__Sequence__init(fc_custom_interface__msg__CustomMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fc_custom_interface__msg__CustomMessage * data = NULL;

  if (size) {
    data = (fc_custom_interface__msg__CustomMessage *)allocator.zero_allocate(size, sizeof(fc_custom_interface__msg__CustomMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fc_custom_interface__msg__CustomMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fc_custom_interface__msg__CustomMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
fc_custom_interface__msg__CustomMessage__Sequence__fini(fc_custom_interface__msg__CustomMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      fc_custom_interface__msg__CustomMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

fc_custom_interface__msg__CustomMessage__Sequence *
fc_custom_interface__msg__CustomMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fc_custom_interface__msg__CustomMessage__Sequence * array = (fc_custom_interface__msg__CustomMessage__Sequence *)allocator.allocate(sizeof(fc_custom_interface__msg__CustomMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fc_custom_interface__msg__CustomMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fc_custom_interface__msg__CustomMessage__Sequence__destroy(fc_custom_interface__msg__CustomMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fc_custom_interface__msg__CustomMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}
