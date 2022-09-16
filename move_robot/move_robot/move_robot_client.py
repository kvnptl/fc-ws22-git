import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from fc_custom_interface.action import MoveRobot

import sys

class MoveRobotClient(Node):
    def __init__(self):
        super().__init__('move_robot_client')

        self._action_client = ActionClient(self, MoveRobot, '/move_my_robot')

    def send_goal(self, destination):
        goal_msg = MoveRobot.Goal()
        goal_msg.destination = destination

        self._action_client.wait_for_server()

        self._send_goal_future =self._action_client.send_goal_async(goal_msg, feedback_callback=self.feedback_callback)
        self._send_goal_future.add_done_callback(self.get_response_callback)

    def get_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected')
            return
        self.get_logger().info('Goal accepted')
        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.result_callback)

    def feedback_callback(self, feedback_msg):
        self.get_logger().info(f'Feedback: Robot at {feedback_msg.feedback.current_position}.')

    def result_callback(self, future):
        result = future.result().result
        self.get_logger().info(f'Result: {result.reached}')
        rclpy.shutdown()


def main(args=None):
    rclpy.init(args=args)
    move_robot_client =MoveRobotClient()

    move_robot_client.send_goal(5)
    rclpy.spin(move_robot_client)

if __name__ == '__main__':
    main()
