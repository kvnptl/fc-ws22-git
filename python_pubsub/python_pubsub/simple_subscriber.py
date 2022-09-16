import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from fc_custom_interface.msg import CustomMessage

class SimpleSubscriber(Node):
    def __init__(self):
        super(). __init__("simple_subscriber")
        self.subscription = self.create_subscription(
            CustomMessage,
            '/physics',
            self.sub_callback,
            10
        )

    def sub_callback(self, msg):
        self.get_logger().info(f'Multiverse heard: \n \
                                Name: {msg.name} \n \
                                Is Alive: {msg.is_alive} \n \
                                Death Count: {msg.death_count} \n \
                                Persons Alive: {msg.persons_alive} \n')

def main(args=None):
    rclpy.init(args=args)
    simple_subscriber = SimpleSubscriber()
    rclpy.spin(simple_subscriber)
    simple_subscriber.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
