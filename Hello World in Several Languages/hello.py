#!/usr/bin/python
import sys

def hello(name):
    print("Hello " + name)

print("Hello Python!")
for i in range(1, len(sys.argv)):
    hello(sys.argv[i])
