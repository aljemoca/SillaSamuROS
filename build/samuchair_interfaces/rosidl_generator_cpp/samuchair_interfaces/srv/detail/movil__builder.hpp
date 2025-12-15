// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from samuchair_interfaces:srv/Movil.idl
// generated code does not contain a copyright notice

#ifndef SAMUCHAIR_INTERFACES__SRV__DETAIL__MOVIL__BUILDER_HPP_
#define SAMUCHAIR_INTERFACES__SRV__DETAIL__MOVIL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "samuchair_interfaces/srv/detail/movil__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace samuchair_interfaces
{

namespace srv
{

namespace builder
{

class Init_Movil_Request_command
{
public:
  Init_Movil_Request_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::samuchair_interfaces::srv::Movil_Request command(::samuchair_interfaces::srv::Movil_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::samuchair_interfaces::srv::Movil_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::samuchair_interfaces::srv::Movil_Request>()
{
  return samuchair_interfaces::srv::builder::Init_Movil_Request_command();
}

}  // namespace samuchair_interfaces


namespace samuchair_interfaces
{

namespace srv
{

namespace builder
{

class Init_Movil_Response_out
{
public:
  explicit Init_Movil_Response_out(::samuchair_interfaces::srv::Movil_Response & msg)
  : msg_(msg)
  {}
  ::samuchair_interfaces::srv::Movil_Response out(::samuchair_interfaces::srv::Movil_Response::_out_type arg)
  {
    msg_.out = std::move(arg);
    return std::move(msg_);
  }

private:
  ::samuchair_interfaces::srv::Movil_Response msg_;
};

class Init_Movil_Response_status
{
public:
  Init_Movil_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Movil_Response_out status(::samuchair_interfaces::srv::Movil_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Movil_Response_out(msg_);
  }

private:
  ::samuchair_interfaces::srv::Movil_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::samuchair_interfaces::srv::Movil_Response>()
{
  return samuchair_interfaces::srv::builder::Init_Movil_Response_status();
}

}  // namespace samuchair_interfaces

#endif  // SAMUCHAIR_INTERFACES__SRV__DETAIL__MOVIL__BUILDER_HPP_
