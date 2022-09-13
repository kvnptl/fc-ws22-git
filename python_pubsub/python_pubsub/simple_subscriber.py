import rclpy
from rclpy.node import Node

from std_msgs.msg import String

class SimpleSubscriber(Node):

    def  __init__(self):
        super().__init__('simple_subscriber')

        self.sub = self.create_subscription(
            String,
            '/physics',
            self.sub_callback,
            10
        )

    def sub_callback(self, msg):
        self.get_logger().info(f'Multiverse heard: {msg.data}')

def main(args=None):
    rclpy.init(args=args)

    simple_sub = SimpleSubscriber()

    rclpy.spin(simple_sub)

    simple_sub.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()