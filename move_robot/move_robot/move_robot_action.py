import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from fc_custom_interface.action import MoveRobot
import time

class MoveRobotServer(Node):

    def __init__(self):
        super(). __init__("move_robot_server")

        self._action_server = ActionServer(self, MoveRobot, '/move_my_robot', self.server_callback)

        self.robot_postion = 0
        self.get_logger().info(f'Robot is currently at {self.robot_postion}.')

    def server_callback(self, goal_handle):
        self.get_logger().info(f'Robot is currently at {self.robot_postion}.')
        self.get_logger().info(f'Received goal to move {goal_handle.request.destination} steps')
        feedback = MoveRobot.Feedback()
        goal_distance = goal_handle.request.destination

        for _ in range(goal_distance):
            self.robot_postion += 1
            feedback.current_position = self.robot_postion
            self.get_logger().info(f'Feedback Robot at {feedback.current_position}.')
            goal_handle.publish_feedback(feedback)
            time.sleep(1)

        goal_handle.succeed()

        result = MoveRobot.Result()
        result.reached = True
        return result

def main(args=None):
    rclpy.init(args=args)
    move_robot_server = MoveRobotServer()
    rclpy.spin(move_robot_server)

if __name__ == '__main__':
    main()
