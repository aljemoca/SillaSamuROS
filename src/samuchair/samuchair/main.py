#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Wed May  7 11:48:32 2025

@author: labserver
"""

import rclpy
from rclpy.node import Node
from rclpy.time import Time
from rclpy.clock import ClockType
from std_msgs.msg import String  # Ajusta el tipo de mensaje según tus necesidades
from std_msgs.msg import Int32,Float32

 # Asegúrate de que la ruta de importación sea correcta

#from SecondaryTask import SecondaryTask



import numpy as np




class mainNode(Node):
    def __init__(self):
        super().__init__('st_node')
        self.st = SecondaryTask() 
        self.subscription = self.create_subscription(String,'tipo_exp',self.sus_function,4)
        self.publisher_st_nexttime = self.create_publisher(Float32, 'random_time', 10)
        self.publisher_st_medida = self.create_publisher(Float32,'diff_time',10)
        self.publisher_st_atendido = self.create_publisher(Int32,'Attended',10)
        self.interval = self.st.nextTimePoint()
        print(self.interval)
        self.timer = self.create_timer(1.0,self.timer_callback)
        self.otro = self.create_timer(1.0,self.timer_lectura)
        self.tiempo_inicio = self.get_clock().now()
        #self.publish_loop()
        #self.timer = self.create_timer(1.5, self.timer_callback)  # Llama a la función cada segundo


    def sus_function(self,msg):
        self.get_logger().info(f'Mensaje recibido: {msg.data}')
        if msg.data == "Experimento 1":
            self.activate=True
            print("Activar tarea secundaria")
        else:
            self.activate=False
            print("Desactivar tarea secundaria")

    def start_random_timer(self):
        msg = Float32()
        self.interval = self.st.nextTimePoint()
        msg.data = self.interval
        if self.activate:
            self.publisher_st_nexttime.publish(msg)
            self.get_logger().info(f'Dato publicado ST: {msg.data}')
        #print(self.interval)
        if self.timer:
            self.timer.cancel()
        self.timer = self.create_timer(self.interval,self.timer_callback)
        self.tiempo_inicio = self.get_clock().now()
        
    def timer_lectura(self):
        msg = Float32()
        if self.timeout == 5.0:
            msg.data = self.timeout
            if self.activate:
                self.publisher_st_medida.publish(msg)
                self.get_logger().info(f' Timeout: {msg.data}')
            self.timeout+=1.0
            self.st.reset()
        elif self.timeout < 5.0:
            self.timeout+=1.0

        if self.st.dataReady() and self.timeout < 4.0:
            msg.data = self.st.readTime()
            if self.activate:
                self.publisher_st_medida.publish(msg)
                self.get_logger().info(f'Dato medido ST: {msg.data}')
            self.timeout = 6.0

    def timer_callback(self):      
        #msg = Float32()
        #msg.data = self.interval
        #self.publisher_st_nexttime.publish(msg)
        #self.get_logger().info(f'Dato publicado ST: {msg.data}')
        #duration = (self.get_clock().now()-self.tiempo_inicio).nanoseconds/1000000000.0
        #msg.data = duration
        #self.publisher_st_medida.publish(msg)
        #self.get_logger().info(f'Dato publicado ST Medida: {msg.data}')
        if self.activate:
            self.tono = self.st.playTone()
            msg = Int32()
            msg.data = self.tono
            self.publisher_st_atendido.publish(msg)
            self.get_logger().info(f'Publicado: "{msg.data}"')

        self.start_random_timer()
        self.timeout=0
    def publish_loop(self):  #ANTIGUO
        msg_count = 0
        while rclpy.ok():
            #delay = self.st.nextTimePoint();
            msg = Float32()
            if self.st.dataReady():
                msg.data = self.st.readTime()
                self.publisher_st_medida.publish(msg)
                #self.get_logger().info(f'Publicado: "{msg.data}"')


def main(args=None):
    rclpy.init(args=args)
    node = secondarytaskNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        #node.destroy_webcam()  
        rclpy.shutdown()

if __name__ == '__main__':
    main()
