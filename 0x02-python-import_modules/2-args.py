#!/usr/bin/python3
import sys
if __name__ == "__main__":
    length = len(sys.argv) - 1
    if length == 1:
        print("{:d} argument:".format(length))
    else:
        if length == 0:
            print("{:d} arguments.".format(length))
        else:
            print("{:d} arguments:".format(length))
    for i in range(1, length + 1):
        print("{:d}: {:s}".format(i, sys.argv[i]))
