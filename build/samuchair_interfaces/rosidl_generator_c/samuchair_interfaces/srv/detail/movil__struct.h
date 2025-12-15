// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from samuchair_interfaces:srv/Movil.idl
// generated code does not contain a copyright notice

#ifndef SAMUCHAIR_INTERFACES__SRV__DETAIL__MOVIL__STRUCT_H_
#define SAMUCHAIR_INTERFACES__SRV__DETAIL__MOVIL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Movil in the package samuchair_interfaces.
typedef struct samuchair_interfaces__srv__Movil_Request
{
  uint8_t command;
} samuchair_interfaces__srv__Movil_Request;

// Struct for a sequence of samuchair_interfaces__srv__Movil_Request.
typedef struct samuchair_interfaces__srv__Movil_Request__Sequence
{
  samuchair_interfaces__srv__Movil_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} samuchair_interfaces__srv__Movil_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'out'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Movil in the package samuchair_interfaces.
typedef struct samuchair_interfaces__srv__Movil_Response
{
  bool status;
  rosidl_runtime_c__String out;
} samuchair_interfaces__srv__Movil_Response;

// Struct for a sequence of samuchair_interfaces__srv__Movil_Response.
typedef struct samuchair_interfaces__srv__Movil_Response__Sequence
{
  samuchair_interfaces__srv__Movil_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} samuchair_interfaces__srv__Movil_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SAMUCHAIR_INTERFACES__SRV__DETAIL__MOVIL__STRUCT_H_
