// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from samuchair_interfaces:srv/Movil.idl
// generated code does not contain a copyright notice

#ifndef SAMUCHAIR_INTERFACES__SRV__DETAIL__MOVIL__TRAITS_HPP_
#define SAMUCHAIR_INTERFACES__SRV__DETAIL__MOVIL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "samuchair_interfaces/srv/detail/movil__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace samuchair_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Movil_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: command
  {
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Movil_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Movil_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace samuchair_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use samuchair_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const samuchair_interfaces::srv::Movil_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  samuchair_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use samuchair_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const samuchair_interfaces::srv::Movil_Request & msg)
{
  return samuchair_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<samuchair_interfaces::srv::Movil_Request>()
{
  return "samuchair_interfaces::srv::Movil_Request";
}

template<>
inline const char * name<samuchair_interfaces::srv::Movil_Request>()
{
  return "samuchair_interfaces/srv/Movil_Request";
}

template<>
struct has_fixed_size<samuchair_interfaces::srv::Movil_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<samuchair_interfaces::srv::Movil_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<samuchair_interfaces::srv::Movil_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace samuchair_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Movil_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: out
  {
    out << "out: ";
    rosidl_generator_traits::value_to_yaml(msg.out, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Movil_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: out
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "out: ";
    rosidl_generator_traits::value_to_yaml(msg.out, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Movil_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace samuchair_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use samuchair_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const samuchair_interfaces::srv::Movil_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  samuchair_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use samuchair_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const samuchair_interfaces::srv::Movil_Response & msg)
{
  return samuchair_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<samuchair_interfaces::srv::Movil_Response>()
{
  return "samuchair_interfaces::srv::Movil_Response";
}

template<>
inline const char * name<samuchair_interfaces::srv::Movil_Response>()
{
  return "samuchair_interfaces/srv/Movil_Response";
}

template<>
struct has_fixed_size<samuchair_interfaces::srv::Movil_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<samuchair_interfaces::srv::Movil_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<samuchair_interfaces::srv::Movil_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<samuchair_interfaces::srv::Movil>()
{
  return "samuchair_interfaces::srv::Movil";
}

template<>
inline const char * name<samuchair_interfaces::srv::Movil>()
{
  return "samuchair_interfaces/srv/Movil";
}

template<>
struct has_fixed_size<samuchair_interfaces::srv::Movil>
  : std::integral_constant<
    bool,
    has_fixed_size<samuchair_interfaces::srv::Movil_Request>::value &&
    has_fixed_size<samuchair_interfaces::srv::Movil_Response>::value
  >
{
};

template<>
struct has_bounded_size<samuchair_interfaces::srv::Movil>
  : std::integral_constant<
    bool,
    has_bounded_size<samuchair_interfaces::srv::Movil_Request>::value &&
    has_bounded_size<samuchair_interfaces::srv::Movil_Response>::value
  >
{
};

template<>
struct is_service<samuchair_interfaces::srv::Movil>
  : std::true_type
{
};

template<>
struct is_service_request<samuchair_interfaces::srv::Movil_Request>
  : std::true_type
{
};

template<>
struct is_service_response<samuchair_interfaces::srv::Movil_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SAMUCHAIR_INTERFACES__SRV__DETAIL__MOVIL__TRAITS_HPP_
