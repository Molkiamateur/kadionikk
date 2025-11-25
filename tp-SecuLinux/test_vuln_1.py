#!/bin/python

import socket

TCP_IP = '127.0.0.1'
TCP_PORT = 11222

MESSAGE = 'B' * 256

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.connect((TCP_IP, TCP_PORT))
s.send(MESSAGE.encode())
print("Buffer sent.")
print(':'.join(x.encode('hex') for x in MESSAGE))

