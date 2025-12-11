#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Wed May  7 11:48:32 2025

@author: labserver
"""
import time
import rclpy
from rclpy.node import Node
from std_msgs.msg import String  # Ajusta el tipo de mensaje según tus necesidades
from std_msgs.msg import Int32
 # Asegúrate de que la ruta de importación sea correcta
from samuchair import mapJoyFingerChair as joy


class  jBNode(Node):
    def __init__(self):
        super().__init__('jb_node')
        try:
            self.jB=joy.ComJoyBluetooth()  # Ajusta el puerto según corresponda
            self.jB.set_callback(self.jb_callback)
        except:
            print("No se puede inicializar el módulo para el Joystick Bluetooth")
        finally:
            self.publisher_frame = self.create_publisher(Int32, 'jBnode', 10)
            self.publisher_bluetooth = self.create_publisher(Int32,'BluetoothConnected',2)
    #    self.timer = self.create_timer(2, self.timer_callback)  # Llama a la función cada segundo



    def __del__(self):
        """Asegura que la cámara se cierre cuando el objeto es destruido."""
        if hasattr(self, 'jB'):
            del self.jB
            print("Joystick Bluetooth liberado por el destructor.")
        super().destroy_node()

    def jb_callback(self,indata):
        msg = Int32()
        msg.data = indata
        if msg.data == -1 or msg.data == -2:
            self.publisher_bluetooth.publish(msg)
        else:
            self.publisher_frame.publish(msg)
        self.get_logger().info(f'Comando Joystick Bluetooth: {msg.data}')
 


def main(args=None):
    rclpy.init(args=args)
    node = jBNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        rclpy.shutdown()

if __name__ == '__main__':
    main()
