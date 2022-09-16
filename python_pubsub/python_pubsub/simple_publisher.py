import imp
import rclpy
from rclpy.node import Node

from std_msgs.msg import String

from fc_custom_interface.msg import CustomMessage

class SimplePublisher(Node):
    def __init__(self):
        super().__init__("simple_publisher")
        self.pub=self.create_publisher(CustomMessage,'/physics',10)

        time_period = 0.5 #seconds
        self.timer = self.create_timer(time_period,self.timer_callback)
        self.counter = 10000

    def timer_callback(self):
        msg = CustomMessage()
        msg.death_count = self.counter
        msg.name = "Ravi"
        msg.is_alive = False
        msg.persons_alive = ["Shubham", "Raj", "Rahul"]
        self.pub.publish(msg)
        self.get_logger().info(f'publishing the death count: {self.counter}')
        self.counter += 1

def main(args=None):
    rclpy.init(args=args)
    simple_pub = SimplePublisher()
    rclpy.spin(simple_pub)
    simple_pub.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()