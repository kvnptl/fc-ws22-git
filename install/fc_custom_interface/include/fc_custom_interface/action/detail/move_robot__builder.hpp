// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fc_custom_interface:action/MoveRobot.idl
// generated code does not contain a copyright notice

#ifndef FC_CUSTOM_INTERFACE__ACTION__DETAIL__MOVE_ROBOT__BUILDER_HPP_
#define FC_CUSTOM_INTERFACE__ACTION__DETAIL__MOVE_ROBOT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fc_custom_interface/action/detail/move_robot__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fc_custom_interface
{

namespace action
{

namespace builder
{

class Init_MoveRobot_Goal_destination
{
public:
  Init_MoveRobot_Goal_destination()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::fc_custom_interface::action::MoveRobot_Goal destination(::fc_custom_interface::action::MoveRobot_Goal::_destination_type arg)
  {
    msg_.destination = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fc_custom_interface::action::MoveRobot_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::fc_custom_interface::action::MoveRobot_Goal>()
{
  return fc_custom_interface::action::builder::Init_MoveRobot_Goal_destination();
}

}  // namespace fc_custom_interface


namespace fc_custom_interface
{

namespace action
{

namespace builder
{

class Init_MoveRobot_Result_reached
{
public:
  Init_MoveRobot_Result_reached()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::fc_custom_interface::action::MoveRobot_Result reached(::fc_custom_interface::action::MoveRobot_Result::_reached_type arg)
  {
    msg_.reached = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fc_custom_interface::action::MoveRobot_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::fc_custom_interface::action::MoveRobot_Result>()
{
  return fc_custom_interface::action::builder::Init_MoveRobot_Result_reached();
}

}  // namespace fc_custom_interface


namespace fc_custom_interface
{

namespace action
{

namespace builder
{

class Init_MoveRobot_Feedback_current_position
{
public:
  Init_MoveRobot_Feedback_current_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::fc_custom_interface::action::MoveRobot_Feedback current_position(::fc_custom_interface::action::MoveRobot_Feedback::_current_position_type arg)
  {
    msg_.current_position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fc_custom_interface::action::MoveRobot_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::fc_custom_interface::action::MoveRobot_Feedback>()
{
  return fc_custom_interface::action::builder::Init_MoveRobot_Feedback_current_position();
}

}  // namespace fc_custom_interface


namespace fc_custom_interface
{

namespace action
{

namespace builder
{

class Init_MoveRobot_SendGoal_Request_goal
{
public:
  explicit Init_MoveRobot_SendGoal_Request_goal(::fc_custom_interface::action::MoveRobot_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::fc_custom_interface::action::MoveRobot_SendGoal_Request goal(::fc_custom_interface::action::MoveRobot_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fc_custom_interface::action::MoveRobot_SendGoal_Request msg_;
};

class Init_MoveRobot_SendGoal_Request_goal_id
{
public:
  Init_MoveRobot_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveRobot_SendGoal_Request_goal goal_id(::fc_custom_interface::action::MoveRobot_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveRobot_SendGoal_Request_goal(msg_);
  }

private:
  ::fc_custom_interface::action::MoveRobot_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::fc_custom_interface::action::MoveRobot_SendGoal_Request>()
{
  return fc_custom_interface::action::builder::Init_MoveRobot_SendGoal_Request_goal_id();
}

}  // namespace fc_custom_interface


namespace fc_custom_interface
{

namespace action
{

namespace builder
{

class Init_MoveRobot_SendGoal_Response_stamp
{
public:
  explicit Init_MoveRobot_SendGoal_Response_stamp(::fc_custom_interface::action::MoveRobot_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::fc_custom_interface::action::MoveRobot_SendGoal_Response stamp(::fc_custom_interface::action::MoveRobot_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fc_custom_interface::action::MoveRobot_SendGoal_Response msg_;
};

class Init_MoveRobot_SendGoal_Response_accepted
{
public:
  Init_MoveRobot_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveRobot_SendGoal_Response_stamp accepted(::fc_custom_interface::action::MoveRobot_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_MoveRobot_SendGoal_Response_stamp(msg_);
  }

private:
  ::fc_custom_interface::action::MoveRobot_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::fc_custom_interface::action::MoveRobot_SendGoal_Response>()
{
  return fc_custom_interface::action::builder::Init_MoveRobot_SendGoal_Response_accepted();
}

}  // namespace fc_custom_interface


namespace fc_custom_interface
{

namespace action
{

namespace builder
{

class Init_MoveRobot_GetResult_Request_goal_id
{
public:
  Init_MoveRobot_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::fc_custom_interface::action::MoveRobot_GetResult_Request goal_id(::fc_custom_interface::action::MoveRobot_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fc_custom_interface::action::MoveRobot_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::fc_custom_interface::action::MoveRobot_GetResult_Request>()
{
  return fc_custom_interface::action::builder::Init_MoveRobot_GetResult_Request_goal_id();
}

}  // namespace fc_custom_interface


namespace fc_custom_interface
{

namespace action
{

namespace builder
{

class Init_MoveRobot_GetResult_Response_result
{
public:
  explicit Init_MoveRobot_GetResult_Response_result(::fc_custom_interface::action::MoveRobot_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::fc_custom_interface::action::MoveRobot_GetResult_Response result(::fc_custom_interface::action::MoveRobot_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fc_custom_interface::action::MoveRobot_GetResult_Response msg_;
};

class Init_MoveRobot_GetResult_Response_status
{
public:
  Init_MoveRobot_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveRobot_GetResult_Response_result status(::fc_custom_interface::action::MoveRobot_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MoveRobot_GetResult_Response_result(msg_);
  }

private:
  ::fc_custom_interface::action::MoveRobot_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::fc_custom_interface::action::MoveRobot_GetResult_Response>()
{
  return fc_custom_interface::action::builder::Init_MoveRobot_GetResult_Response_status();
}

}  // namespace fc_custom_interface


namespace fc_custom_interface
{

namespace action
{

namespace builder
{

class Init_MoveRobot_FeedbackMessage_feedback
{
public:
  explicit Init_MoveRobot_FeedbackMessage_feedback(::fc_custom_interface::action::MoveRobot_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::fc_custom_interface::action::MoveRobot_FeedbackMessage feedback(::fc_custom_interface::action::MoveRobot_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fc_custom_interface::action::MoveRobot_FeedbackMessage msg_;
};

class Init_MoveRobot_FeedbackMessage_goal_id
{
public:
  Init_MoveRobot_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveRobot_FeedbackMessage_feedback goal_id(::fc_custom_interface::action::MoveRobot_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveRobot_FeedbackMessage_feedback(msg_);
  }

private:
  ::fc_custom_interface::action::MoveRobot_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::fc_custom_interface::action::MoveRobot_FeedbackMessage>()
{
  return fc_custom_interface::action::builder::Init_MoveRobot_FeedbackMessage_goal_id();
}

}  // namespace fc_custom_interface

#endif  // FC_CUSTOM_INTERFACE__ACTION__DETAIL__MOVE_ROBOT__BUILDER_HPP_
