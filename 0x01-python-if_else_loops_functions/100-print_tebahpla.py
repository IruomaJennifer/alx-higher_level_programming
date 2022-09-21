#!/usr/bin/python3
flag = 0
for i in range(122, 96, -1):
    if flag == 1:
        case = -32
        flag = 0
    elif flag == 0:
        case = 0
        flag = 1
    print("{:c}".format(i + case), end="")
