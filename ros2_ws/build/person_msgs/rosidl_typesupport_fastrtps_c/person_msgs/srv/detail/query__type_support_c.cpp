// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from person_msgs:srv/Query.idl
// generated code does not contain a copyright notice
#include "person_msgs/srv/detail/query__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "person_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "person_msgs/srv/detail/query__struct.h"
#include "person_msgs/srv/detail/query__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Query_Request__ros_msg_type = person_msgs__srv__Query_Request;

static bool _Query_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Query_Request__ros_msg_type * ros_message = static_cast<const _Query_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: light
  {
    cdr << ros_message->light;
  }

  // Field name: value
  {
    cdr << ros_message->value;
  }

  return true;
}

static bool _Query_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Query_Request__ros_msg_type * ros_message = static_cast<_Query_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: light
  {
    cdr >> ros_message->light;
  }

  // Field name: value
  {
    cdr >> ros_message->value;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_person_msgs
size_t get_serialized_size_person_msgs__srv__Query_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Query_Request__ros_msg_type * ros_message = static_cast<const _Query_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name light
  {
    size_t item_size = sizeof(ros_message->light);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name value
  {
    size_t item_size = sizeof(ros_message->value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Query_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_person_msgs__srv__Query_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_person_msgs
size_t max_serialized_size_person_msgs__srv__Query_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: light
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: value
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _Query_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_person_msgs__srv__Query_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Query_Request = {
  "person_msgs::srv",
  "Query_Request",
  _Query_Request__cdr_serialize,
  _Query_Request__cdr_deserialize,
  _Query_Request__get_serialized_size,
  _Query_Request__max_serialized_size
};

static rosidl_message_type_support_t _Query_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Query_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, person_msgs, srv, Query_Request)() {
  return &_Query_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "person_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "person_msgs/srv/detail/query__struct.h"
// already included above
// #include "person_msgs/srv/detail/query__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Query_Response__ros_msg_type = person_msgs__srv__Query_Response;

static bool _Query_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Query_Response__ros_msg_type * ros_message = static_cast<const _Query_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: color
  {
    cdr << ros_message->color;
  }

  // Field name: total
  {
    cdr << ros_message->total;
  }

  return true;
}

static bool _Query_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Query_Response__ros_msg_type * ros_message = static_cast<_Query_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: color
  {
    cdr >> ros_message->color;
  }

  // Field name: total
  {
    cdr >> ros_message->total;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_person_msgs
size_t get_serialized_size_person_msgs__srv__Query_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Query_Response__ros_msg_type * ros_message = static_cast<const _Query_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name color
  {
    size_t item_size = sizeof(ros_message->color);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name total
  {
    size_t item_size = sizeof(ros_message->total);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Query_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_person_msgs__srv__Query_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_person_msgs
size_t max_serialized_size_person_msgs__srv__Query_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: color
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: total
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _Query_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_person_msgs__srv__Query_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Query_Response = {
  "person_msgs::srv",
  "Query_Response",
  _Query_Response__cdr_serialize,
  _Query_Response__cdr_deserialize,
  _Query_Response__get_serialized_size,
  _Query_Response__max_serialized_size
};

static rosidl_message_type_support_t _Query_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Query_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, person_msgs, srv, Query_Response)() {
  return &_Query_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "person_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "person_msgs/srv/query.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Query__callbacks = {
  "person_msgs::srv",
  "Query",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, person_msgs, srv, Query_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, person_msgs, srv, Query_Response)(),
};

static rosidl_service_type_support_t Query__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Query__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, person_msgs, srv, Query)() {
  return &Query__handle;
}

#if defined(__cplusplus)
}
#endif
