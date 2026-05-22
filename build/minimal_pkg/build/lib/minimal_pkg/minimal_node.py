import rclpy
from rclpy.node import Node

class MinimalNode(Node):
    def __init__(self):
        super().__init__('minimal_node')
        self.get_logger().info('Hello, ROS!')

def main(args=None):
    rclpy.init(args=args)
    minimal_node=MinimalNode()
    minimal_node.destroy_node()


if __name__ == '__main__':
    main()