// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fc_custom_interface:action/MoveRobot.idl
// generated code does not contain a copyright notice
#include "fc_custom_interface/action/detail/move_robot__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
fc_custom_interface__action__MoveRobot_Goal__init(fc_custom_interface__action__MoveRobot_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // destination
  return true;
}

void
fc_custom_interface__action__MoveRobot_Goal__fini(fc_custom_interface__action__MoveRobot_Goal * msg)
{
  if (!msg) {
    return;
  }
  // destination
}

fc_custom_interface__action__MoveRobot_Goal *
fc_custom_interface__action__MoveRobot_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fc_custom_interface__action__MoveRobot_Goal * msg = (fc_custom_interface__action__MoveRobot_Goal *)allocator.allocate(sizeof(fc_custom_interface__action__MoveRobot_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fc_custom_interface__action__MoveRobot_Goal));
  bool success = fc_custom_interface__action__MoveRobot_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fc_custom_interface__action__MoveRobot_Goal__destroy(fc_custom_interface__action__MoveRobot_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fc_custom_interface__action__MoveRobot_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fc_custom_interface__action__MoveRobot_Goal__Sequence__init(fc_custom_interface__action__MoveRobot_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fc_custom_interface__action__MoveRobot_Goal * data = NULL;

  if (size) {
    data = (fc_custom_interface__action__MoveRobot_Goal *)allocator.zero_allocate(size, sizeof(fc_custom_interface__action__MoveRobot_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fc_custom_interface__action__MoveRobot_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fc_custom_interface__action__MoveRobot_Goal__fini(&data[i - 1]);
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
fc_custom_interface__action__MoveRobot_Goal__Sequence__fini(fc_custom_interface__action__MoveRobot_Goal__Sequence * array)
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
      fc_custom_interface__action__MoveRobot_Goal__fini(&array->data[i]);
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

fc_custom_interface__action__MoveRobot_Goal__Sequence *
fc_custom_interface__action__MoveRobot_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fc_custom_interface__action__MoveRobot_Goal__Sequence * array = (fc_custom_interface__action__MoveRobot_Goal__Sequence *)allocator.allocate(sizeof(fc_custom_interface__action__MoveRobot_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fc_custom_interface__action__MoveRobot_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fc_custom_interface__action__MoveRobot_Goal__Sequence__destroy(fc_custom_interface__action__MoveRobot_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fc_custom_interface__action__MoveRobot_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}


bool
fc_custom_interface__action__MoveRobot_Result__init(fc_custom_interface__action__MoveRobot_Result * msg)
{
  if (!msg) {
    return false;
  }
  // reached
  return true;
}

void
fc_custom_interface__action__MoveRobot_Result__fini(fc_custom_interface__action__MoveRobot_Result * msg)
{
  if (!msg) {
    return;
  }
  // reached
}

fc_custom_interface__action__MoveRobot_Result *
fc_custom_interface__action__MoveRobot_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fc_custom_interface__action__MoveRobot_Result * msg = (fc_custom_interface__action__MoveRobot_Result *)allocator.allocate(sizeof(fc_custom_interface__action__MoveRobot_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fc_custom_interface__action__MoveRobot_Result));
  bool success = fc_custom_interface__action__MoveRobot_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fc_custom_interface__action__MoveRobot_Result__destroy(fc_custom_interface__action__MoveRobot_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fc_custom_interface__action__MoveRobot_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fc_custom_interface__action__MoveRobot_Result__Sequence__init(fc_custom_interface__action__MoveRobot_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fc_custom_interface__action__MoveRobot_Result * data = NULL;

  if (size) {
    data = (fc_custom_interface__action__MoveRobot_Result *)allocator.zero_allocate(size, sizeof(fc_custom_interface__action__MoveRobot_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fc_custom_interface__action__MoveRobot_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fc_custom_interface__action__MoveRobot_Result__fini(&data[i - 1]);
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
fc_custom_interface__action__MoveRobot_Result__Sequence__fini(fc_custom_interface__action__MoveRobot_Result__Sequence * array)
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
      fc_custom_interface__action__MoveRobot_Result__fini(&array->data[i]);
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

fc_custom_interface__action__MoveRobot_Result__Sequence *
fc_custom_interface__action__MoveRobot_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fc_custom_interface__action__MoveRobot_Result__Sequence * array = (fc_custom_interface__action__MoveRobot_Result__Sequence *)allocator.allocate(sizeof(fc_custom_interface__action__MoveRobot_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fc_custom_interface__action__MoveRobot_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fc_custom_interface__action__MoveRobot_Result__Sequence__destroy(fc_custom_interface__action__MoveRobot_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fc_custom_interface__action__MoveRobot_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}


bool
fc_custom_interface__action__MoveRobot_Feedback__init(fc_custom_interface__action__MoveRobot_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // current_position
  return true;
}

void
fc_custom_interface__action__MoveRobot_Feedback__fini(fc_custom_interface__action__MoveRobot_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // current_position
}

fc_custom_interface__action__MoveRobot_Feedback *
fc_custom_interface__action__MoveRobot_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fc_custom_interface__action__MoveRobot_Feedback * msg = (fc_custom_interface__action__MoveRobot_Feedback *)allocator.allocate(sizeof(fc_custom_interface__action__MoveRobot_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fc_custom_interface__action__MoveRobot_Feedback));
  bool success = fc_custom_interface__action__MoveRobot_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fc_custom_interface__action__MoveRobot_Feedback__destroy(fc_custom_interface__action__MoveRobot_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fc_custom_interface__action__MoveRobot_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fc_custom_interface__action__MoveRobot_Feedback__Sequence__init(fc_custom_interface__action__MoveRobot_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fc_custom_interface__action__MoveRobot_Feedback * data = NULL;

  if (size) {
    data = (fc_custom_interface__action__MoveRobot_Feedback *)allocator.zero_allocate(size, sizeof(fc_custom_interface__action__MoveRobot_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fc_custom_interface__action__MoveRobot_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fc_custom_interface__action__MoveRobot_Feedback__fini(&data[i - 1]);
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
fc_custom_interface__action__MoveRobot_Feedback__Sequence__fini(fc_custom_interface__action__MoveRobot_Feedback__Sequence * array)
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
      fc_custom_interface__action__MoveRobot_Feedback__fini(&array->data[i]);
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

fc_custom_interface__action__MoveRobot_Feedback__Sequence *
fc_custom_interface__action__MoveRobot_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fc_custom_interface__action__MoveRobot_Feedback__Sequence * array = (fc_custom_interface__action__MoveRobot_Feedback__Sequence *)allocator.allocate(sizeof(fc_custom_interface__action__MoveRobot_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fc_custom_interface__action__MoveRobot_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fc_custom_interface__action__MoveRobot_Feedback__Sequence__destroy(fc_custom_interface__action__MoveRobot_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fc_custom_interface__action__MoveRobot_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "fc_custom_interface/action/detail/move_robot__functions.h"

bool
fc_custom_interface__action__MoveRobot_SendGoal_Request__init(fc_custom_interface__action__MoveRobot_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    fc_custom_interface__action__MoveRobot_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!fc_custom_interface__action__MoveRobot_Goal__init(&msg->goal)) {
    fc_custom_interface__action__MoveRobot_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
fc_custom_interface__action__MoveRobot_SendGoal_Request__fini(fc_custom_interface__action__MoveRobot_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  fc_custom_interface__action__MoveRobot_Goal__fini(&msg->goal);
}

fc_custom_interface__action__MoveRobot_SendGoal_Request *
fc_custom_interface__action__MoveRobot_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fc_custom_interface__action__MoveRobot_SendGoal_Request * msg = (fc_custom_interface__action__MoveRobot_SendGoal_Request *)allocator.allocate(sizeof(fc_custom_interface__action__MoveRobot_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fc_custom_interface__action__MoveRobot_SendGoal_Request));
  bool success = fc_custom_interface__action__MoveRobot_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fc_custom_interface__action__MoveRobot_SendGoal_Request__destroy(fc_custom_interface__action__MoveRobot_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fc_custom_interface__action__MoveRobot_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fc_custom_interface__action__MoveRobot_SendGoal_Request__Sequence__init(fc_custom_interface__action__MoveRobot_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fc_custom_interface__action__MoveRobot_SendGoal_Request * data = NULL;

  if (size) {
    data = (fc_custom_interface__action__MoveRobot_SendGoal_Request *)allocator.zero_allocate(size, sizeof(fc_custom_interface__action__MoveRobot_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fc_custom_interface__action__MoveRobot_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fc_custom_interface__action__MoveRobot_SendGoal_Request__fini(&data[i - 1]);
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
fc_custom_interface__action__MoveRobot_SendGoal_Request__Sequence__fini(fc_custom_interface__action__MoveRobot_SendGoal_Request__Sequence * array)
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
      fc_custom_interface__action__MoveRobot_SendGoal_Request__fini(&array->data[i]);
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

fc_custom_interface__action__MoveRobot_SendGoal_Request__Sequence *
fc_custom_interface__action__MoveRobot_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fc_custom_interface__action__MoveRobot_SendGoal_Request__Sequence * array = (fc_custom_interface__action__MoveRobot_SendGoal_Request__Sequence *)allocator.allocate(sizeof(fc_custom_interface__action__MoveRobot_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fc_custom_interface__action__MoveRobot_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fc_custom_interface__action__MoveRobot_SendGoal_Request__Sequence__destroy(fc_custom_interface__action__MoveRobot_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fc_custom_interface__action__MoveRobot_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
fc_custom_interface__action__MoveRobot_SendGoal_Response__init(fc_custom_interface__action__MoveRobot_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    fc_custom_interface__action__MoveRobot_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
fc_custom_interface__action__MoveRobot_SendGoal_Response__fini(fc_custom_interface__action__MoveRobot_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

fc_custom_interface__action__MoveRobot_SendGoal_Response *
fc_custom_interface__action__MoveRobot_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fc_custom_interface__action__MoveRobot_SendGoal_Response * msg = (fc_custom_interface__action__MoveRobot_SendGoal_Response *)allocator.allocate(sizeof(fc_custom_interface__action__MoveRobot_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fc_custom_interface__action__MoveRobot_SendGoal_Response));
  bool success = fc_custom_interface__action__MoveRobot_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fc_custom_interface__action__MoveRobot_SendGoal_Response__destroy(fc_custom_interface__action__MoveRobot_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fc_custom_interface__action__MoveRobot_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fc_custom_interface__action__MoveRobot_SendGoal_Response__Sequence__init(fc_custom_interface__action__MoveRobot_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fc_custom_interface__action__MoveRobot_SendGoal_Response * data = NULL;

  if (size) {
    data = (fc_custom_interface__action__MoveRobot_SendGoal_Response *)allocator.zero_allocate(size, sizeof(fc_custom_interface__action__MoveRobot_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fc_custom_interface__action__MoveRobot_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fc_custom_interface__action__MoveRobot_SendGoal_Response__fini(&data[i - 1]);
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
fc_custom_interface__action__MoveRobot_SendGoal_Response__Sequence__fini(fc_custom_interface__action__MoveRobot_SendGoal_Response__Sequence * array)
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
      fc_custom_interface__action__MoveRobot_SendGoal_Response__fini(&array->data[i]);
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

fc_custom_interface__action__MoveRobot_SendGoal_Response__Sequence *
fc_custom_interface__action__MoveRobot_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fc_custom_interface__action__MoveRobot_SendGoal_Response__Sequence * array = (fc_custom_interface__action__MoveRobot_SendGoal_Response__Sequence *)allocator.allocate(sizeof(fc_custom_interface__action__MoveRobot_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fc_custom_interface__action__MoveRobot_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fc_custom_interface__action__MoveRobot_SendGoal_Response__Sequence__destroy(fc_custom_interface__action__MoveRobot_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fc_custom_interface__action__MoveRobot_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
fc_custom_interface__action__MoveRobot_GetResult_Request__init(fc_custom_interface__action__MoveRobot_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    fc_custom_interface__action__MoveRobot_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
fc_custom_interface__action__MoveRobot_GetResult_Request__fini(fc_custom_interface__action__MoveRobot_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

fc_custom_interface__action__MoveRobot_GetResult_Request *
fc_custom_interface__action__MoveRobot_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fc_custom_interface__action__MoveRobot_GetResult_Request * msg = (fc_custom_interface__action__MoveRobot_GetResult_Request *)allocator.allocate(sizeof(fc_custom_interface__action__MoveRobot_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fc_custom_interface__action__MoveRobot_GetResult_Request));
  bool success = fc_custom_interface__action__MoveRobot_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fc_custom_interface__action__MoveRobot_GetResult_Request__destroy(fc_custom_interface__action__MoveRobot_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fc_custom_interface__action__MoveRobot_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fc_custom_interface__action__MoveRobot_GetResult_Request__Sequence__init(fc_custom_interface__action__MoveRobot_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fc_custom_interface__action__MoveRobot_GetResult_Request * data = NULL;

  if (size) {
    data = (fc_custom_interface__action__MoveRobot_GetResult_Request *)allocator.zero_allocate(size, sizeof(fc_custom_interface__action__MoveRobot_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fc_custom_interface__action__MoveRobot_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fc_custom_interface__action__MoveRobot_GetResult_Request__fini(&data[i - 1]);
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
fc_custom_interface__action__MoveRobot_GetResult_Request__Sequence__fini(fc_custom_interface__action__MoveRobot_GetResult_Request__Sequence * array)
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
      fc_custom_interface__action__MoveRobot_GetResult_Request__fini(&array->data[i]);
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

fc_custom_interface__action__MoveRobot_GetResult_Request__Sequence *
fc_custom_interface__action__MoveRobot_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fc_custom_interface__action__MoveRobot_GetResult_Request__Sequence * array = (fc_custom_interface__action__MoveRobot_GetResult_Request__Sequence *)allocator.allocate(sizeof(fc_custom_interface__action__MoveRobot_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fc_custom_interface__action__MoveRobot_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fc_custom_interface__action__MoveRobot_GetResult_Request__Sequence__destroy(fc_custom_interface__action__MoveRobot_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fc_custom_interface__action__MoveRobot_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}


// Include directives for member types
// Member `result`
// already included above
// #include "fc_custom_interface/action/detail/move_robot__functions.h"

bool
fc_custom_interface__action__MoveRobot_GetResult_Response__init(fc_custom_interface__action__MoveRobot_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!fc_custom_interface__action__MoveRobot_Result__init(&msg->result)) {
    fc_custom_interface__action__MoveRobot_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
fc_custom_interface__action__MoveRobot_GetResult_Response__fini(fc_custom_interface__action__MoveRobot_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  fc_custom_interface__action__MoveRobot_Result__fini(&msg->result);
}

fc_custom_interface__action__MoveRobot_GetResult_Response *
fc_custom_interface__action__MoveRobot_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fc_custom_interface__action__MoveRobot_GetResult_Response * msg = (fc_custom_interface__action__MoveRobot_GetResult_Response *)allocator.allocate(sizeof(fc_custom_interface__action__MoveRobot_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fc_custom_interface__action__MoveRobot_GetResult_Response));
  bool success = fc_custom_interface__action__MoveRobot_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fc_custom_interface__action__MoveRobot_GetResult_Response__destroy(fc_custom_interface__action__MoveRobot_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fc_custom_interface__action__MoveRobot_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fc_custom_interface__action__MoveRobot_GetResult_Response__Sequence__init(fc_custom_interface__action__MoveRobot_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fc_custom_interface__action__MoveRobot_GetResult_Response * data = NULL;

  if (size) {
    data = (fc_custom_interface__action__MoveRobot_GetResult_Response *)allocator.zero_allocate(size, sizeof(fc_custom_interface__action__MoveRobot_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fc_custom_interface__action__MoveRobot_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fc_custom_interface__action__MoveRobot_GetResult_Response__fini(&data[i - 1]);
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
fc_custom_interface__action__MoveRobot_GetResult_Response__Sequence__fini(fc_custom_interface__action__MoveRobot_GetResult_Response__Sequence * array)
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
      fc_custom_interface__action__MoveRobot_GetResult_Response__fini(&array->data[i]);
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

fc_custom_interface__action__MoveRobot_GetResult_Response__Sequence *
fc_custom_interface__action__MoveRobot_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fc_custom_interface__action__MoveRobot_GetResult_Response__Sequence * array = (fc_custom_interface__action__MoveRobot_GetResult_Response__Sequence *)allocator.allocate(sizeof(fc_custom_interface__action__MoveRobot_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fc_custom_interface__action__MoveRobot_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fc_custom_interface__action__MoveRobot_GetResult_Response__Sequence__destroy(fc_custom_interface__action__MoveRobot_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fc_custom_interface__action__MoveRobot_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "fc_custom_interface/action/detail/move_robot__functions.h"

bool
fc_custom_interface__action__MoveRobot_FeedbackMessage__init(fc_custom_interface__action__MoveRobot_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    fc_custom_interface__action__MoveRobot_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!fc_custom_interface__action__MoveRobot_Feedback__init(&msg->feedback)) {
    fc_custom_interface__action__MoveRobot_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
fc_custom_interface__action__MoveRobot_FeedbackMessage__fini(fc_custom_interface__action__MoveRobot_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  fc_custom_interface__action__MoveRobot_Feedback__fini(&msg->feedback);
}

fc_custom_interface__action__MoveRobot_FeedbackMessage *
fc_custom_interface__action__MoveRobot_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fc_custom_interface__action__MoveRobot_FeedbackMessage * msg = (fc_custom_interface__action__MoveRobot_FeedbackMessage *)allocator.allocate(sizeof(fc_custom_interface__action__MoveRobot_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fc_custom_interface__action__MoveRobot_FeedbackMessage));
  bool success = fc_custom_interface__action__MoveRobot_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fc_custom_interface__action__MoveRobot_FeedbackMessage__destroy(fc_custom_interface__action__MoveRobot_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fc_custom_interface__action__MoveRobot_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fc_custom_interface__action__MoveRobot_FeedbackMessage__Sequence__init(fc_custom_interface__action__MoveRobot_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fc_custom_interface__action__MoveRobot_FeedbackMessage * data = NULL;

  if (size) {
    data = (fc_custom_interface__action__MoveRobot_FeedbackMessage *)allocator.zero_allocate(size, sizeof(fc_custom_interface__action__MoveRobot_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fc_custom_interface__action__MoveRobot_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fc_custom_interface__action__MoveRobot_FeedbackMessage__fini(&data[i - 1]);
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
fc_custom_interface__action__MoveRobot_FeedbackMessage__Sequence__fini(fc_custom_interface__action__MoveRobot_FeedbackMessage__Sequence * array)
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
      fc_custom_interface__action__MoveRobot_FeedbackMessage__fini(&array->data[i]);
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

fc_custom_interface__action__MoveRobot_FeedbackMessage__Sequence *
fc_custom_interface__action__MoveRobot_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fc_custom_interface__action__MoveRobot_FeedbackMessage__Sequence * array = (fc_custom_interface__action__MoveRobot_FeedbackMessage__Sequence *)allocator.allocate(sizeof(fc_custom_interface__action__MoveRobot_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fc_custom_interface__action__MoveRobot_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fc_custom_interface__action__MoveRobot_FeedbackMessage__Sequence__destroy(fc_custom_interface__action__MoveRobot_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fc_custom_interface__action__MoveRobot_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}
