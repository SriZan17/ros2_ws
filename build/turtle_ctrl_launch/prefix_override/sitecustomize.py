import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/srjn/ros2_ws/install/turtle_ctrl_launch'
