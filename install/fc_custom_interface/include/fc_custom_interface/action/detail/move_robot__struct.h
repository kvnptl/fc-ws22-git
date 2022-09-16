// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fc_custom_interface:action/MoveRobot.idl
// generated code does not contain a copyright notice

#ifndef FC_CUSTOM_INTERFACE__ACTION__DETAIL__MOVE_ROBOT__STRUCT_H_
#define FC_CUSTOM_INTERFACE__ACTION__DETAIL__MOVE_ROBOT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in action/MoveRobot in the package fc_custom_interface.
typedef struct fc_custom_interface__action__MoveRobot_Goal
{
  int32_t destination;
} fc_custom_interface__action__MoveRobot_Goal;

// Struct for a sequence of fc_custom_interface__action__MoveRobot_Goal.
typedef struct fc_custom_interface__action__MoveRobot_Goal__Sequence
{
  fc_custom_interface__action__MoveRobot_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fc_custom_interface__action__MoveRobot_Goal__Sequence;


// Constants defined in the message

// Struct defined in action/MoveRobot in the package fc_custom_interface.
typedef struct fc_custom_interface__action__MoveRobot_Result
{
  bool reached;
} fc_custom_interface__action__MoveRobot_Result;

// Struct for a sequence of fc_custom_interface__action__MoveRobot_Result.
typedef struct fc_custom_interface__action__MoveRobot_Result__Sequence
{
  fc_custom_interface__action__MoveRobot_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fc_custom_interface__action__MoveRobot_Result__Sequence;


// Constants defined in the message

// Struct defined in action/MoveRobot in the package fc_custom_interface.
typedef struct fc_custom_interface__action__MoveRobot_Feedback
{
  int32_t current_position;
} fc_custom_interface__action__MoveRobot_Feedback;

// Struct for a sequence of fc_custom_interface__action__MoveRobot_Feedback.
typedef struct fc_custom_interface__action__MoveRobot_Feedback__Sequence
{
  fc_custom_interface__action__MoveRobot_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fc_custom_interface__action__MoveRobot_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "fc_custom_interface/action/detail/move_robot__struct.h"

// Struct defined in action/MoveRobot in the package fc_custom_interface.
typedef struct fc_custom_interface__action__MoveRobot_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  fc_custom_interface__action__MoveRobot_Goal goal;
} fc_custom_interface__action__MoveRobot_SendGoal_Request;

// Struct for a sequence of fc_custom_interface__action__MoveRobot_SendGoal_Request.
typedef struct fc_custom_interface__action__MoveRobot_SendGoal_Request__Sequence
{
  fc_custom_interface__action__MoveRobot_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fc_custom_interface__action__MoveRobot_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/MoveRobot in the package fc_custom_interface.
typedef struct fc_custom_interface__action__MoveRobot_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} fc_custom_interface__action__MoveRobot_SendGoal_Response;

// Struct for a sequence of fc_custom_interface__action__MoveRobot_SendGoal_Response.
typedef struct fc_custom_interface__action__MoveRobot_SendGoal_Response__Sequence
{
  fc_custom_interface__action__MoveRobot_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fc_custom_interface__action__MoveRobot_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/MoveRobot in the package fc_custom_interface.
typedef struct fc_custom_interface__action__MoveRobot_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} fc_custom_interface__action__MoveRobot_GetResult_Request;

// Struct for a sequence of fc_custom_interface__action__MoveRobot_GetResult_Request.
typedef struct fc_custom_interface__action__MoveRobot_GetResult_Request__Sequence
{
  fc_custom_interface__action__MoveRobot_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fc_custom_interface__action__MoveRobot_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "fc_custom_interface/action/detail/move_robot__struct.h"

// Struct defined in action/MoveRobot in the package fc_custom_interface.
typedef struct fc_custom_interface__action__MoveRobot_GetResult_Response
{
  int8_t status;
  fc_custom_interface__action__MoveRobot_Result result;
} fc_custom_interface__action__MoveRobot_GetResult_Response;

// Struct for a sequence of fc_custom_interface__action__MoveRobot_GetResult_Response.
typedef struct fc_custom_interface__action__MoveRobot_GetResult_Response__Sequence
{
  fc_custom_interface__action__MoveRobot_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fc_custom_interface__action__MoveRobot_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "fc_custom_interface/action/detail/move_robot__struct.h"

// Struct defined in action/MoveRobot in the package fc_custom_interface.
typedef struct fc_custom_interface__action__MoveRobot_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  fc_custom_interface__action__MoveRobot_Feedback feedback;
} fc_custom_interface__action__MoveRobot_FeedbackMessage;

// Struct for a sequence of fc_custom_interface__action__MoveRobot_FeedbackMessage.
typedef struct fc_custom_interface__action__MoveRobot_FeedbackMessage__Sequence
{
  fc_custom_interface__action__MoveRobot_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fc_custom_interface__action__MoveRobot_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FC_CUSTOM_INTERFACE__ACTION__DETAIL__MOVE_ROBOT__STRUCT_H_
