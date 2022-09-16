// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from fc_custom_interface:action/MoveRobot.idl
// generated code does not contain a copyright notice

#ifndef FC_CUSTOM_INTERFACE__ACTION__DETAIL__MOVE_ROBOT__FUNCTIONS_H_
#define FC_CUSTOM_INTERFACE__ACTION__DETAIL__MOVE_ROBOT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "fc_custom_interface/msg/rosidl_generator_c__visibility_control.h"

#include "fc_custom_interface/action/detail/move_robot__struct.h"

/// Initialize action/MoveRobot message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * fc_custom_interface__action__MoveRobot_Goal
 * )) before or use
 * fc_custom_interface__action__MoveRobot_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
bool
fc_custom_interface__action__MoveRobot_Goal__init(fc_custom_interface__action__MoveRobot_Goal * msg);

/// Finalize action/MoveRobot message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
void
fc_custom_interface__action__MoveRobot_Goal__fini(fc_custom_interface__action__MoveRobot_Goal * msg);

/// Create action/MoveRobot message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * fc_custom_interface__action__MoveRobot_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
fc_custom_interface__action__MoveRobot_Goal *
fc_custom_interface__action__MoveRobot_Goal__create();

/// Destroy action/MoveRobot message.
/**
 * It calls
 * fc_custom_interface__action__MoveRobot_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
void
fc_custom_interface__action__MoveRobot_Goal__destroy(fc_custom_interface__action__MoveRobot_Goal * msg);


/// Initialize array of action/MoveRobot messages.
/**
 * It allocates the memory for the number of elements and calls
 * fc_custom_interface__action__MoveRobot_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
bool
fc_custom_interface__action__MoveRobot_Goal__Sequence__init(fc_custom_interface__action__MoveRobot_Goal__Sequence * array, size_t size);

/// Finalize array of action/MoveRobot messages.
/**
 * It calls
 * fc_custom_interface__action__MoveRobot_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
void
fc_custom_interface__action__MoveRobot_Goal__Sequence__fini(fc_custom_interface__action__MoveRobot_Goal__Sequence * array);

/// Create array of action/MoveRobot messages.
/**
 * It allocates the memory for the array and calls
 * fc_custom_interface__action__MoveRobot_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
fc_custom_interface__action__MoveRobot_Goal__Sequence *
fc_custom_interface__action__MoveRobot_Goal__Sequence__create(size_t size);

/// Destroy array of action/MoveRobot messages.
/**
 * It calls
 * fc_custom_interface__action__MoveRobot_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
void
fc_custom_interface__action__MoveRobot_Goal__Sequence__destroy(fc_custom_interface__action__MoveRobot_Goal__Sequence * array);

/// Initialize action/MoveRobot message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * fc_custom_interface__action__MoveRobot_Result
 * )) before or use
 * fc_custom_interface__action__MoveRobot_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
bool
fc_custom_interface__action__MoveRobot_Result__init(fc_custom_interface__action__MoveRobot_Result * msg);

/// Finalize action/MoveRobot message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
void
fc_custom_interface__action__MoveRobot_Result__fini(fc_custom_interface__action__MoveRobot_Result * msg);

/// Create action/MoveRobot message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * fc_custom_interface__action__MoveRobot_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
fc_custom_interface__action__MoveRobot_Result *
fc_custom_interface__action__MoveRobot_Result__create();

/// Destroy action/MoveRobot message.
/**
 * It calls
 * fc_custom_interface__action__MoveRobot_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
void
fc_custom_interface__action__MoveRobot_Result__destroy(fc_custom_interface__action__MoveRobot_Result * msg);


/// Initialize array of action/MoveRobot messages.
/**
 * It allocates the memory for the number of elements and calls
 * fc_custom_interface__action__MoveRobot_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
bool
fc_custom_interface__action__MoveRobot_Result__Sequence__init(fc_custom_interface__action__MoveRobot_Result__Sequence * array, size_t size);

/// Finalize array of action/MoveRobot messages.
/**
 * It calls
 * fc_custom_interface__action__MoveRobot_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
void
fc_custom_interface__action__MoveRobot_Result__Sequence__fini(fc_custom_interface__action__MoveRobot_Result__Sequence * array);

/// Create array of action/MoveRobot messages.
/**
 * It allocates the memory for the array and calls
 * fc_custom_interface__action__MoveRobot_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
fc_custom_interface__action__MoveRobot_Result__Sequence *
fc_custom_interface__action__MoveRobot_Result__Sequence__create(size_t size);

/// Destroy array of action/MoveRobot messages.
/**
 * It calls
 * fc_custom_interface__action__MoveRobot_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
void
fc_custom_interface__action__MoveRobot_Result__Sequence__destroy(fc_custom_interface__action__MoveRobot_Result__Sequence * array);

/// Initialize action/MoveRobot message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * fc_custom_interface__action__MoveRobot_Feedback
 * )) before or use
 * fc_custom_interface__action__MoveRobot_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
bool
fc_custom_interface__action__MoveRobot_Feedback__init(fc_custom_interface__action__MoveRobot_Feedback * msg);

/// Finalize action/MoveRobot message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
void
fc_custom_interface__action__MoveRobot_Feedback__fini(fc_custom_interface__action__MoveRobot_Feedback * msg);

/// Create action/MoveRobot message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * fc_custom_interface__action__MoveRobot_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
fc_custom_interface__action__MoveRobot_Feedback *
fc_custom_interface__action__MoveRobot_Feedback__create();

/// Destroy action/MoveRobot message.
/**
 * It calls
 * fc_custom_interface__action__MoveRobot_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
void
fc_custom_interface__action__MoveRobot_Feedback__destroy(fc_custom_interface__action__MoveRobot_Feedback * msg);


/// Initialize array of action/MoveRobot messages.
/**
 * It allocates the memory for the number of elements and calls
 * fc_custom_interface__action__MoveRobot_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
bool
fc_custom_interface__action__MoveRobot_Feedback__Sequence__init(fc_custom_interface__action__MoveRobot_Feedback__Sequence * array, size_t size);

/// Finalize array of action/MoveRobot messages.
/**
 * It calls
 * fc_custom_interface__action__MoveRobot_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
void
fc_custom_interface__action__MoveRobot_Feedback__Sequence__fini(fc_custom_interface__action__MoveRobot_Feedback__Sequence * array);

/// Create array of action/MoveRobot messages.
/**
 * It allocates the memory for the array and calls
 * fc_custom_interface__action__MoveRobot_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
fc_custom_interface__action__MoveRobot_Feedback__Sequence *
fc_custom_interface__action__MoveRobot_Feedback__Sequence__create(size_t size);

/// Destroy array of action/MoveRobot messages.
/**
 * It calls
 * fc_custom_interface__action__MoveRobot_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
void
fc_custom_interface__action__MoveRobot_Feedback__Sequence__destroy(fc_custom_interface__action__MoveRobot_Feedback__Sequence * array);

/// Initialize action/MoveRobot message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * fc_custom_interface__action__MoveRobot_SendGoal_Request
 * )) before or use
 * fc_custom_interface__action__MoveRobot_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
bool
fc_custom_interface__action__MoveRobot_SendGoal_Request__init(fc_custom_interface__action__MoveRobot_SendGoal_Request * msg);

/// Finalize action/MoveRobot message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
void
fc_custom_interface__action__MoveRobot_SendGoal_Request__fini(fc_custom_interface__action__MoveRobot_SendGoal_Request * msg);

/// Create action/MoveRobot message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * fc_custom_interface__action__MoveRobot_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
fc_custom_interface__action__MoveRobot_SendGoal_Request *
fc_custom_interface__action__MoveRobot_SendGoal_Request__create();

/// Destroy action/MoveRobot message.
/**
 * It calls
 * fc_custom_interface__action__MoveRobot_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
void
fc_custom_interface__action__MoveRobot_SendGoal_Request__destroy(fc_custom_interface__action__MoveRobot_SendGoal_Request * msg);


/// Initialize array of action/MoveRobot messages.
/**
 * It allocates the memory for the number of elements and calls
 * fc_custom_interface__action__MoveRobot_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
bool
fc_custom_interface__action__MoveRobot_SendGoal_Request__Sequence__init(fc_custom_interface__action__MoveRobot_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/MoveRobot messages.
/**
 * It calls
 * fc_custom_interface__action__MoveRobot_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
void
fc_custom_interface__action__MoveRobot_SendGoal_Request__Sequence__fini(fc_custom_interface__action__MoveRobot_SendGoal_Request__Sequence * array);

/// Create array of action/MoveRobot messages.
/**
 * It allocates the memory for the array and calls
 * fc_custom_interface__action__MoveRobot_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
fc_custom_interface__action__MoveRobot_SendGoal_Request__Sequence *
fc_custom_interface__action__MoveRobot_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/MoveRobot messages.
/**
 * It calls
 * fc_custom_interface__action__MoveRobot_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
void
fc_custom_interface__action__MoveRobot_SendGoal_Request__Sequence__destroy(fc_custom_interface__action__MoveRobot_SendGoal_Request__Sequence * array);

/// Initialize action/MoveRobot message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * fc_custom_interface__action__MoveRobot_SendGoal_Response
 * )) before or use
 * fc_custom_interface__action__MoveRobot_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
bool
fc_custom_interface__action__MoveRobot_SendGoal_Response__init(fc_custom_interface__action__MoveRobot_SendGoal_Response * msg);

/// Finalize action/MoveRobot message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
void
fc_custom_interface__action__MoveRobot_SendGoal_Response__fini(fc_custom_interface__action__MoveRobot_SendGoal_Response * msg);

/// Create action/MoveRobot message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * fc_custom_interface__action__MoveRobot_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
fc_custom_interface__action__MoveRobot_SendGoal_Response *
fc_custom_interface__action__MoveRobot_SendGoal_Response__create();

/// Destroy action/MoveRobot message.
/**
 * It calls
 * fc_custom_interface__action__MoveRobot_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
void
fc_custom_interface__action__MoveRobot_SendGoal_Response__destroy(fc_custom_interface__action__MoveRobot_SendGoal_Response * msg);


/// Initialize array of action/MoveRobot messages.
/**
 * It allocates the memory for the number of elements and calls
 * fc_custom_interface__action__MoveRobot_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
bool
fc_custom_interface__action__MoveRobot_SendGoal_Response__Sequence__init(fc_custom_interface__action__MoveRobot_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/MoveRobot messages.
/**
 * It calls
 * fc_custom_interface__action__MoveRobot_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
void
fc_custom_interface__action__MoveRobot_SendGoal_Response__Sequence__fini(fc_custom_interface__action__MoveRobot_SendGoal_Response__Sequence * array);

/// Create array of action/MoveRobot messages.
/**
 * It allocates the memory for the array and calls
 * fc_custom_interface__action__MoveRobot_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
fc_custom_interface__action__MoveRobot_SendGoal_Response__Sequence *
fc_custom_interface__action__MoveRobot_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/MoveRobot messages.
/**
 * It calls
 * fc_custom_interface__action__MoveRobot_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
void
fc_custom_interface__action__MoveRobot_SendGoal_Response__Sequence__destroy(fc_custom_interface__action__MoveRobot_SendGoal_Response__Sequence * array);

/// Initialize action/MoveRobot message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * fc_custom_interface__action__MoveRobot_GetResult_Request
 * )) before or use
 * fc_custom_interface__action__MoveRobot_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
bool
fc_custom_interface__action__MoveRobot_GetResult_Request__init(fc_custom_interface__action__MoveRobot_GetResult_Request * msg);

/// Finalize action/MoveRobot message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
void
fc_custom_interface__action__MoveRobot_GetResult_Request__fini(fc_custom_interface__action__MoveRobot_GetResult_Request * msg);

/// Create action/MoveRobot message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * fc_custom_interface__action__MoveRobot_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
fc_custom_interface__action__MoveRobot_GetResult_Request *
fc_custom_interface__action__MoveRobot_GetResult_Request__create();

/// Destroy action/MoveRobot message.
/**
 * It calls
 * fc_custom_interface__action__MoveRobot_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
void
fc_custom_interface__action__MoveRobot_GetResult_Request__destroy(fc_custom_interface__action__MoveRobot_GetResult_Request * msg);


/// Initialize array of action/MoveRobot messages.
/**
 * It allocates the memory for the number of elements and calls
 * fc_custom_interface__action__MoveRobot_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
bool
fc_custom_interface__action__MoveRobot_GetResult_Request__Sequence__init(fc_custom_interface__action__MoveRobot_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/MoveRobot messages.
/**
 * It calls
 * fc_custom_interface__action__MoveRobot_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
void
fc_custom_interface__action__MoveRobot_GetResult_Request__Sequence__fini(fc_custom_interface__action__MoveRobot_GetResult_Request__Sequence * array);

/// Create array of action/MoveRobot messages.
/**
 * It allocates the memory for the array and calls
 * fc_custom_interface__action__MoveRobot_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
fc_custom_interface__action__MoveRobot_GetResult_Request__Sequence *
fc_custom_interface__action__MoveRobot_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/MoveRobot messages.
/**
 * It calls
 * fc_custom_interface__action__MoveRobot_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
void
fc_custom_interface__action__MoveRobot_GetResult_Request__Sequence__destroy(fc_custom_interface__action__MoveRobot_GetResult_Request__Sequence * array);

/// Initialize action/MoveRobot message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * fc_custom_interface__action__MoveRobot_GetResult_Response
 * )) before or use
 * fc_custom_interface__action__MoveRobot_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
bool
fc_custom_interface__action__MoveRobot_GetResult_Response__init(fc_custom_interface__action__MoveRobot_GetResult_Response * msg);

/// Finalize action/MoveRobot message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
void
fc_custom_interface__action__MoveRobot_GetResult_Response__fini(fc_custom_interface__action__MoveRobot_GetResult_Response * msg);

/// Create action/MoveRobot message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * fc_custom_interface__action__MoveRobot_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
fc_custom_interface__action__MoveRobot_GetResult_Response *
fc_custom_interface__action__MoveRobot_GetResult_Response__create();

/// Destroy action/MoveRobot message.
/**
 * It calls
 * fc_custom_interface__action__MoveRobot_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
void
fc_custom_interface__action__MoveRobot_GetResult_Response__destroy(fc_custom_interface__action__MoveRobot_GetResult_Response * msg);


/// Initialize array of action/MoveRobot messages.
/**
 * It allocates the memory for the number of elements and calls
 * fc_custom_interface__action__MoveRobot_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
bool
fc_custom_interface__action__MoveRobot_GetResult_Response__Sequence__init(fc_custom_interface__action__MoveRobot_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/MoveRobot messages.
/**
 * It calls
 * fc_custom_interface__action__MoveRobot_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
void
fc_custom_interface__action__MoveRobot_GetResult_Response__Sequence__fini(fc_custom_interface__action__MoveRobot_GetResult_Response__Sequence * array);

/// Create array of action/MoveRobot messages.
/**
 * It allocates the memory for the array and calls
 * fc_custom_interface__action__MoveRobot_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
fc_custom_interface__action__MoveRobot_GetResult_Response__Sequence *
fc_custom_interface__action__MoveRobot_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/MoveRobot messages.
/**
 * It calls
 * fc_custom_interface__action__MoveRobot_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
void
fc_custom_interface__action__MoveRobot_GetResult_Response__Sequence__destroy(fc_custom_interface__action__MoveRobot_GetResult_Response__Sequence * array);

/// Initialize action/MoveRobot message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * fc_custom_interface__action__MoveRobot_FeedbackMessage
 * )) before or use
 * fc_custom_interface__action__MoveRobot_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
bool
fc_custom_interface__action__MoveRobot_FeedbackMessage__init(fc_custom_interface__action__MoveRobot_FeedbackMessage * msg);

/// Finalize action/MoveRobot message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
void
fc_custom_interface__action__MoveRobot_FeedbackMessage__fini(fc_custom_interface__action__MoveRobot_FeedbackMessage * msg);

/// Create action/MoveRobot message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * fc_custom_interface__action__MoveRobot_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
fc_custom_interface__action__MoveRobot_FeedbackMessage *
fc_custom_interface__action__MoveRobot_FeedbackMessage__create();

/// Destroy action/MoveRobot message.
/**
 * It calls
 * fc_custom_interface__action__MoveRobot_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
void
fc_custom_interface__action__MoveRobot_FeedbackMessage__destroy(fc_custom_interface__action__MoveRobot_FeedbackMessage * msg);


/// Initialize array of action/MoveRobot messages.
/**
 * It allocates the memory for the number of elements and calls
 * fc_custom_interface__action__MoveRobot_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
bool
fc_custom_interface__action__MoveRobot_FeedbackMessage__Sequence__init(fc_custom_interface__action__MoveRobot_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/MoveRobot messages.
/**
 * It calls
 * fc_custom_interface__action__MoveRobot_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
void
fc_custom_interface__action__MoveRobot_FeedbackMessage__Sequence__fini(fc_custom_interface__action__MoveRobot_FeedbackMessage__Sequence * array);

/// Create array of action/MoveRobot messages.
/**
 * It allocates the memory for the array and calls
 * fc_custom_interface__action__MoveRobot_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
fc_custom_interface__action__MoveRobot_FeedbackMessage__Sequence *
fc_custom_interface__action__MoveRobot_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/MoveRobot messages.
/**
 * It calls
 * fc_custom_interface__action__MoveRobot_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fc_custom_interface
void
fc_custom_interface__action__MoveRobot_FeedbackMessage__Sequence__destroy(fc_custom_interface__action__MoveRobot_FeedbackMessage__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // FC_CUSTOM_INTERFACE__ACTION__DETAIL__MOVE_ROBOT__FUNCTIONS_H_
