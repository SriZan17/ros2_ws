import rclpy
from rclpy.node import Node
from std_msgs.msg import Float64
import math

class SinusoidalPublisher(Node):
    def __init__(self):
        super().__init__('sinusoidal_publihser')
        self.publisher = self.create_publisher(Float64, 'sinusoidal_signal',10)
        self.timer = self.create_timer(0.1,self.timer_callback)
        self.i=0

    def timer_callback(self):
        amplitude=2.0
        frequency=0.1
        msg=Float64()
        msg.data=amplitude*math.sin(2*math.pi*frequency*self.i)
        self.publisher.publish(msg)
        self.i+=0.1
    
def main(args=None):
    rclpy.init(args=args)
    sinusoidal_publisher= SinusoidalPublisher()
    rclpy.spin(sinusoidal_publisher)
    sinusoidal_publisher.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()

