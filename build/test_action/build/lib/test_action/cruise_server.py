#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from custom_interfaces.action import CruiseSpeed

class CruiseActionServerNode(Node):

    def __init__(self):
        super().__init__('cruise_node')
        self.cruse_acttion_server=ActionServer(self, CruiseSpeed, "cruise_speed", execute_callback=self.callback_cruise_server)
        self.get_logger().info("Action Server Node Started !! ")

    def callback_cruise_server(self, goal_handle):
        self.get_logger().info("Execute Callback Invoked !!")

def main():
    rclpy.init()

    try:
        node = CruiseActionServerNode()
        rclpy.spin(node)
        node.destroy_node()
        rclpy.shutdown()

    except KeyboardInterrupt:
        print("Test interrupted by user. Exiting...")

if __name__ == '__main__':
    main()