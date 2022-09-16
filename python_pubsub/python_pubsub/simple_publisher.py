import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from fc_custom_interface.msg import CustomMessage


class SimplePublisher(Node):

    def __init__(self):
        super().__init__("simple_publisher")
        self.publisher = self.create_publisher(CustomMessage, '/physics', 10)
        timer_period = 0.5
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.counter = 10000

    def timer_callback(self):
        msg = CustomMessage()
        msg.death_count = self.counter
        msg.name = "Ravi"
        msg.is_alive = True
        msg.persons_alive = ["Shubham", "Raj", "Rahul"]
        self.publisher.publish(msg)
        self.get_logger().info(f'publishing that World will end in {self.counter} minutes')
        self.counter -= 1

def main(args=None):
    rclpy.init(args=args)
    simple_publisher = SimplePublisher()
    rclpy.spin(simple_publisher)
    simple_publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
