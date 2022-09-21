#!/usr/bin/python3
for i in range(97, 123):
    if chr(i) == "q":
        continue
    if chr(i) == "e":
        continue
    print("{:c}".format(i), end="")
