import rclpy
from rclpy.node import Node
from std_msgs.msg import Float64
import threading
import matplotlib.pyplot as plt

class SinusoidalSubscriber(Node):
    def __init__(self):
        super().__init__('sinusoidal_subscriber')
        self.sub = self.create_subscription(Float64,'sinusoidal_signal',self.sinu_sub,10)
        self.first_data_arrived=False
        self.sinu_values=None
        self.logging_time=15
    
    def sinu_sub(self,msg):
        self.sinu_values=msg.data
        self.first_data_arrived=True

    def log_data(self):
        rate=self.create_rate(10)
        sinu_data=[]
        while(self.first_data_arrived==False):
            rate.sleep()
        self.get_logger().info('Starting logging sine wave!')
        t=0.0
        while(t<self.logging_time):
            sinu_data.append(self.sinu_values)
            t=t+0.1
            rate.sleep()
        self.destroy_node()
        plt.plot(sinu_data)
        plt.xlabel('X')
        plt.ylabel('Y')
        plt.title('Sine wave date')
        plt.show()
        rclpy.shutdown()


def main(args=None):
    rclpy.init(args=args)
    sinusoidal_subscriber=SinusoidalSubscriber()
    t=threading.Thread(target=sinusoidal_subscriber.log_data,args=[])
    t.start()
    rclpy.spin(sinusoidal_subscriber)

if __name__ == '__main__':
    main()