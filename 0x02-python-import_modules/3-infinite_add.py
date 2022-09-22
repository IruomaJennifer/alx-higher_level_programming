#!/usr/bin/python3
import sys
if __name__ == "__main__":
    length = len(sys.argv)
    result = 0
    for i in range(1, length):
        result += int(sys.argv[i])
    print(result)
