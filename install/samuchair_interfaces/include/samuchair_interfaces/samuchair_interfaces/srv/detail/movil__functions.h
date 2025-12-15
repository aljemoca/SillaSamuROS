// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from samuchair_interfaces:srv/Movil.idl
// generated code does not contain a copyright notice

#ifndef SAMUCHAIR_INTERFACES__SRV__DETAIL__MOVIL__FUNCTIONS_H_
#define SAMUCHAIR_INTERFACES__SRV__DETAIL__MOVIL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "samuchair_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "samuchair_interfaces/srv/detail/movil__struct.h"

/// Initialize srv/Movil message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * samuchair_interfaces__srv__Movil_Request
 * )) before or use
 * samuchair_interfaces__srv__Movil_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_samuchair_interfaces
bool
samuchair_interfaces__srv__Movil_Request__init(samuchair_interfaces__srv__Movil_Request * msg);

/// Finalize srv/Movil message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_samuchair_interfaces
void
samuchair_interfaces__srv__Movil_Request__fini(samuchair_interfaces__srv__Movil_Request * msg);

/// Create srv/Movil message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * samuchair_interfaces__srv__Movil_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_samuchair_interfaces
samuchair_interfaces__srv__Movil_Request *
samuchair_interfaces__srv__Movil_Request__create();

/// Destroy srv/Movil message.
/**
 * It calls
 * samuchair_interfaces__srv__Movil_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_samuchair_interfaces
void
samuchair_interfaces__srv__Movil_Request__destroy(samuchair_interfaces__srv__Movil_Request * msg);

/// Check for srv/Movil message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_samuchair_interfaces
bool
samuchair_interfaces__srv__Movil_Request__are_equal(const samuchair_interfaces__srv__Movil_Request * lhs, const samuchair_interfaces__srv__Movil_Request * rhs);

/// Copy a srv/Movil message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_samuchair_interfaces
bool
samuchair_interfaces__srv__Movil_Request__copy(
  const samuchair_interfaces__srv__Movil_Request * input,
  samuchair_interfaces__srv__Movil_Request * output);

/// Initialize array of srv/Movil messages.
/**
 * It allocates the memory for the number of elements and calls
 * samuchair_interfaces__srv__Movil_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_samuchair_interfaces
bool
samuchair_interfaces__srv__Movil_Request__Sequence__init(samuchair_interfaces__srv__Movil_Request__Sequence * array, size_t size);

/// Finalize array of srv/Movil messages.
/**
 * It calls
 * samuchair_interfaces__srv__Movil_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_samuchair_interfaces
void
samuchair_interfaces__srv__Movil_Request__Sequence__fini(samuchair_interfaces__srv__Movil_Request__Sequence * array);

/// Create array of srv/Movil messages.
/**
 * It allocates the memory for the array and calls
 * samuchair_interfaces__srv__Movil_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_samuchair_interfaces
samuchair_interfaces__srv__Movil_Request__Sequence *
samuchair_interfaces__srv__Movil_Request__Sequence__create(size_t size);

/// Destroy array of srv/Movil messages.
/**
 * It calls
 * samuchair_interfaces__srv__Movil_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_samuchair_interfaces
void
samuchair_interfaces__srv__Movil_Request__Sequence__destroy(samuchair_interfaces__srv__Movil_Request__Sequence * array);

/// Check for srv/Movil message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_samuchair_interfaces
bool
samuchair_interfaces__srv__Movil_Request__Sequence__are_equal(const samuchair_interfaces__srv__Movil_Request__Sequence * lhs, const samuchair_interfaces__srv__Movil_Request__Sequence * rhs);

/// Copy an array of srv/Movil messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_samuchair_interfaces
bool
samuchair_interfaces__srv__Movil_Request__Sequence__copy(
  const samuchair_interfaces__srv__Movil_Request__Sequence * input,
  samuchair_interfaces__srv__Movil_Request__Sequence * output);

/// Initialize srv/Movil message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * samuchair_interfaces__srv__Movil_Response
 * )) before or use
 * samuchair_interfaces__srv__Movil_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_samuchair_interfaces
bool
samuchair_interfaces__srv__Movil_Response__init(samuchair_interfaces__srv__Movil_Response * msg);

/// Finalize srv/Movil message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_samuchair_interfaces
void
samuchair_interfaces__srv__Movil_Response__fini(samuchair_interfaces__srv__Movil_Response * msg);

/// Create srv/Movil message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * samuchair_interfaces__srv__Movil_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_samuchair_interfaces
samuchair_interfaces__srv__Movil_Response *
samuchair_interfaces__srv__Movil_Response__create();

/// Destroy srv/Movil message.
/**
 * It calls
 * samuchair_interfaces__srv__Movil_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_samuchair_interfaces
void
samuchair_interfaces__srv__Movil_Response__destroy(samuchair_interfaces__srv__Movil_Response * msg);

/// Check for srv/Movil message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_samuchair_interfaces
bool
samuchair_interfaces__srv__Movil_Response__are_equal(const samuchair_interfaces__srv__Movil_Response * lhs, const samuchair_interfaces__srv__Movil_Response * rhs);

/// Copy a srv/Movil message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_samuchair_interfaces
bool
samuchair_interfaces__srv__Movil_Response__copy(
  const samuchair_interfaces__srv__Movil_Response * input,
  samuchair_interfaces__srv__Movil_Response * output);

/// Initialize array of srv/Movil messages.
/**
 * It allocates the memory for the number of elements and calls
 * samuchair_interfaces__srv__Movil_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_samuchair_interfaces
bool
samuchair_interfaces__srv__Movil_Response__Sequence__init(samuchair_interfaces__srv__Movil_Response__Sequence * array, size_t size);

/// Finalize array of srv/Movil messages.
/**
 * It calls
 * samuchair_interfaces__srv__Movil_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_samuchair_interfaces
void
samuchair_interfaces__srv__Movil_Response__Sequence__fini(samuchair_interfaces__srv__Movil_Response__Sequence * array);

/// Create array of srv/Movil messages.
/**
 * It allocates the memory for the array and calls
 * samuchair_interfaces__srv__Movil_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_samuchair_interfaces
samuchair_interfaces__srv__Movil_Response__Sequence *
samuchair_interfaces__srv__Movil_Response__Sequence__create(size_t size);

/// Destroy array of srv/Movil messages.
/**
 * It calls
 * samuchair_interfaces__srv__Movil_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_samuchair_interfaces
void
samuchair_interfaces__srv__Movil_Response__Sequence__destroy(samuchair_interfaces__srv__Movil_Response__Sequence * array);

/// Check for srv/Movil message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_samuchair_interfaces
bool
samuchair_interfaces__srv__Movil_Response__Sequence__are_equal(const samuchair_interfaces__srv__Movil_Response__Sequence * lhs, const samuchair_interfaces__srv__Movil_Response__Sequence * rhs);

/// Copy an array of srv/Movil messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_samuchair_interfaces
bool
samuchair_interfaces__srv__Movil_Response__Sequence__copy(
  const samuchair_interfaces__srv__Movil_Response__Sequence * input,
  samuchair_interfaces__srv__Movil_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SAMUCHAIR_INTERFACES__SRV__DETAIL__MOVIL__FUNCTIONS_H_
