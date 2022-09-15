import rclpy
from rclpy.node import Node
from std_msgs.msg import String 
from fc_custom_interface.msg import CustomMessage

class SimplePublisher(Node):

    def __init__(self):
        super().__init__("simple_publisher")

        self.pub = self.create_publisher(CustomMessage, '/physics', 10)

        #set timer & counter
        time_period = 0.5 #in seconds
        self.timer = self.create_timer(time_period, self.timer_callback)
        self.counter = 10000
    
    def timer_callback(self):
        message = CustomMessage()
        message.name = "E3XAE"
        message.death_count = self.counter
        message.is_alive = False
        message.persons_alive = ["F6RAE","GI9UY","JY7T5"]

        #message.data = f'The World will end in {self.counter} minutes'

        self.pub.publish(message)
        #self.get_logger().info(f"publishing that World will end in {self.counter} minutes")
        self.get_logger().info(f'Death count is {message.death_count} \n\
                                Name of the body is {message.name} \n\
                                Is the body alive {message.is_alive}\n\
                                Persons alive are {message.persons_alive}')
        self.counter = self.counter - 1

def main(args=None):
    #initialize ROS2
    rclpy.init(args = args)

    simple_pub = SimplePublisher()
    rclpy.spin(simple_pub)  #start the node

    #to stop the node
    simple_pub.destroy_node()

    #shutdown the node
    rclpy.shutdown()

if __name__ == '__main__':
    main()