#!/usr/bin/python3
for i in range(0, 100):
    for j in range(i + 1, 10):
        if (i * 10) == 80:
            print("{:d}".format(i * 10 + j))
            break
        print("{:02d}".format(i * 10 + j), end=", ")
