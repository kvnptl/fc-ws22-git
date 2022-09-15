import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from fc_custom_interface.msg import CustomMessage

class SimpleSubscriber(Node):
    
    def __init__(self):
        super().__init__("simple_subscriber")
        self.sub = self.create_subscription(CustomMessage, '/physics', self.sub_callback, 10)

    def sub_callback(self, msg):
        self.get_logger().info(f'Multiverse heard: \n\
                                Name: {msg.name} \n\
                                Is Alive: {msg.is_alive}\n\
                                Death Count: {msg.death_count}\n\
                                Persons Alive: {msg.persons_alive}')
    
def main(args=None):
    #initialize ROS2
    rclpy.init(args = args)

    simple_sub = SimpleSubscriber()
    rclpy.spin(simple_sub)  #start the node

    #to stop the node
    simple_sub.destroy_node()

    #shutdown the node
    rclpy.shutdown()

if __name__ == '__main__':
    main()