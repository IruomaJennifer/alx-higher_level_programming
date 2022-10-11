#!/usr/bin/python3
def uniq_add(my_list=[]):
    if my_list is not None:
        new = set(my_list)
        return sum(new)
