#!/usr/bin/python3
from calculator_1 import add, sub, mul, div
import sys
if __name__ == "__main__":
    length = len(sys.argv) - 1
    if length != 3:
        print("Usage: {:s} <a> <operator> <b>".format(sys.argv[0]))
        exit(1)
    bool1 = sys.argv[2] != '+' and sys.argv[2] != '-'
    bool2 = sys.argv[2] != '*' and sys.argv[2] != '/'
    if bool1 and bool2:
        print("Unknown operator. Available operators: +, -, * and /")
        exit(1)
    a, b = int(sys.argv[1]), int(sys.argv[3])
    if sys.argv[2] == '+':
        print("{:d} {:s} {:d} = {:d}".format(a, sys.argv[2], b, add(a, b)))
    elif sys.argv[2] == '-':
        print("{:d} {:s} {:d} = {:d}".format(a, sys.argv[2], b, sub(a, b)))
    elif sys.argv[2] == '*':
        print("{:d} {:s} {:d} = {:d}".format(a, sys.argv[2], b, mul(a, b)))
    elif sys.argv[2] == '/':
        print("{:d} {:s} {:d} = {:d}".format(a, sys.argv[2], b, div(a, b)))
