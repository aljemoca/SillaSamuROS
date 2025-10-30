// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from samuchair_interfaces:srv/ArduinoMotor.idl
// generated code does not contain a copyright notice
#include "samuchair_interfaces/srv/detail/arduino_motor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `command`
#include "rosidl_runtime_c/string_functions.h"

bool
samuchair_interfaces__srv__ArduinoMotor_Request__init(samuchair_interfaces__srv__ArduinoMotor_Request * msg)
{
  if (!msg) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__init(&msg->command)) {
    samuchair_interfaces__srv__ArduinoMotor_Request__fini(msg);
    return false;
  }
  // x
  // y
  return true;
}

void
samuchair_interfaces__srv__ArduinoMotor_Request__fini(samuchair_interfaces__srv__ArduinoMotor_Request * msg)
{
  if (!msg) {
    return;
  }
  // command
  rosidl_runtime_c__String__fini(&msg->command);
  // x
  // y
}

bool
samuchair_interfaces__srv__ArduinoMotor_Request__are_equal(const samuchair_interfaces__srv__ArduinoMotor_Request * lhs, const samuchair_interfaces__srv__ArduinoMotor_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->command), &(rhs->command)))
  {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  return true;
}

bool
samuchair_interfaces__srv__ArduinoMotor_Request__copy(
  const samuchair_interfaces__srv__ArduinoMotor_Request * input,
  samuchair_interfaces__srv__ArduinoMotor_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__copy(
      &(input->command), &(output->command)))
  {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  return true;
}

samuchair_interfaces__srv__ArduinoMotor_Request *
samuchair_interfaces__srv__ArduinoMotor_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  samuchair_interfaces__srv__ArduinoMotor_Request * msg = (samuchair_interfaces__srv__ArduinoMotor_Request *)allocator.allocate(sizeof(samuchair_interfaces__srv__ArduinoMotor_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(samuchair_interfaces__srv__ArduinoMotor_Request));
  bool success = samuchair_interfaces__srv__ArduinoMotor_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
samuchair_interfaces__srv__ArduinoMotor_Request__destroy(samuchair_interfaces__srv__ArduinoMotor_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    samuchair_interfaces__srv__ArduinoMotor_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
samuchair_interfaces__srv__ArduinoMotor_Request__Sequence__init(samuchair_interfaces__srv__ArduinoMotor_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  samuchair_interfaces__srv__ArduinoMotor_Request * data = NULL;

  if (size) {
    data = (samuchair_interfaces__srv__ArduinoMotor_Request *)allocator.zero_allocate(size, sizeof(samuchair_interfaces__srv__ArduinoMotor_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = samuchair_interfaces__srv__ArduinoMotor_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        samuchair_interfaces__srv__ArduinoMotor_Request__fini(&data[i - 1]);
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
samuchair_interfaces__srv__ArduinoMotor_Request__Sequence__fini(samuchair_interfaces__srv__ArduinoMotor_Request__Sequence * array)
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
      samuchair_interfaces__srv__ArduinoMotor_Request__fini(&array->data[i]);
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

samuchair_interfaces__srv__ArduinoMotor_Request__Sequence *
samuchair_interfaces__srv__ArduinoMotor_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  samuchair_interfaces__srv__ArduinoMotor_Request__Sequence * array = (samuchair_interfaces__srv__ArduinoMotor_Request__Sequence *)allocator.allocate(sizeof(samuchair_interfaces__srv__ArduinoMotor_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = samuchair_interfaces__srv__ArduinoMotor_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
samuchair_interfaces__srv__ArduinoMotor_Request__Sequence__destroy(samuchair_interfaces__srv__ArduinoMotor_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    samuchair_interfaces__srv__ArduinoMotor_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
samuchair_interfaces__srv__ArduinoMotor_Request__Sequence__are_equal(const samuchair_interfaces__srv__ArduinoMotor_Request__Sequence * lhs, const samuchair_interfaces__srv__ArduinoMotor_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!samuchair_interfaces__srv__ArduinoMotor_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
samuchair_interfaces__srv__ArduinoMotor_Request__Sequence__copy(
  const samuchair_interfaces__srv__ArduinoMotor_Request__Sequence * input,
  samuchair_interfaces__srv__ArduinoMotor_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(samuchair_interfaces__srv__ArduinoMotor_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    samuchair_interfaces__srv__ArduinoMotor_Request * data =
      (samuchair_interfaces__srv__ArduinoMotor_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!samuchair_interfaces__srv__ArduinoMotor_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          samuchair_interfaces__srv__ArduinoMotor_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!samuchair_interfaces__srv__ArduinoMotor_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `out`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
samuchair_interfaces__srv__ArduinoMotor_Response__init(samuchair_interfaces__srv__ArduinoMotor_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // out
  if (!rosidl_runtime_c__String__init(&msg->out)) {
    samuchair_interfaces__srv__ArduinoMotor_Response__fini(msg);
    return false;
  }
  // x
  // y
  return true;
}

void
samuchair_interfaces__srv__ArduinoMotor_Response__fini(samuchair_interfaces__srv__ArduinoMotor_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // out
  rosidl_runtime_c__String__fini(&msg->out);
  // x
  // y
}

bool
samuchair_interfaces__srv__ArduinoMotor_Response__are_equal(const samuchair_interfaces__srv__ArduinoMotor_Response * lhs, const samuchair_interfaces__srv__ArduinoMotor_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // out
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->out), &(rhs->out)))
  {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  return true;
}

bool
samuchair_interfaces__srv__ArduinoMotor_Response__copy(
  const samuchair_interfaces__srv__ArduinoMotor_Response * input,
  samuchair_interfaces__srv__ArduinoMotor_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // out
  if (!rosidl_runtime_c__String__copy(
      &(input->out), &(output->out)))
  {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  return true;
}

samuchair_interfaces__srv__ArduinoMotor_Response *
samuchair_interfaces__srv__ArduinoMotor_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  samuchair_interfaces__srv__ArduinoMotor_Response * msg = (samuchair_interfaces__srv__ArduinoMotor_Response *)allocator.allocate(sizeof(samuchair_interfaces__srv__ArduinoMotor_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(samuchair_interfaces__srv__ArduinoMotor_Response));
  bool success = samuchair_interfaces__srv__ArduinoMotor_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
samuchair_interfaces__srv__ArduinoMotor_Response__destroy(samuchair_interfaces__srv__ArduinoMotor_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    samuchair_interfaces__srv__ArduinoMotor_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
samuchair_interfaces__srv__ArduinoMotor_Response__Sequence__init(samuchair_interfaces__srv__ArduinoMotor_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  samuchair_interfaces__srv__ArduinoMotor_Response * data = NULL;

  if (size) {
    data = (samuchair_interfaces__srv__ArduinoMotor_Response *)allocator.zero_allocate(size, sizeof(samuchair_interfaces__srv__ArduinoMotor_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = samuchair_interfaces__srv__ArduinoMotor_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        samuchair_interfaces__srv__ArduinoMotor_Response__fini(&data[i - 1]);
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
samuchair_interfaces__srv__ArduinoMotor_Response__Sequence__fini(samuchair_interfaces__srv__ArduinoMotor_Response__Sequence * array)
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
      samuchair_interfaces__srv__ArduinoMotor_Response__fini(&array->data[i]);
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

samuchair_interfaces__srv__ArduinoMotor_Response__Sequence *
samuchair_interfaces__srv__ArduinoMotor_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  samuchair_interfaces__srv__ArduinoMotor_Response__Sequence * array = (samuchair_interfaces__srv__ArduinoMotor_Response__Sequence *)allocator.allocate(sizeof(samuchair_interfaces__srv__ArduinoMotor_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = samuchair_interfaces__srv__ArduinoMotor_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
samuchair_interfaces__srv__ArduinoMotor_Response__Sequence__destroy(samuchair_interfaces__srv__ArduinoMotor_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    samuchair_interfaces__srv__ArduinoMotor_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
samuchair_interfaces__srv__ArduinoMotor_Response__Sequence__are_equal(const samuchair_interfaces__srv__ArduinoMotor_Response__Sequence * lhs, const samuchair_interfaces__srv__ArduinoMotor_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!samuchair_interfaces__srv__ArduinoMotor_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
samuchair_interfaces__srv__ArduinoMotor_Response__Sequence__copy(
  const samuchair_interfaces__srv__ArduinoMotor_Response__Sequence * input,
  samuchair_interfaces__srv__ArduinoMotor_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(samuchair_interfaces__srv__ArduinoMotor_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    samuchair_interfaces__srv__ArduinoMotor_Response * data =
      (samuchair_interfaces__srv__ArduinoMotor_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!samuchair_interfaces__srv__ArduinoMotor_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          samuchair_interfaces__srv__ArduinoMotor_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!samuchair_interfaces__srv__ArduinoMotor_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
