#!/usr/bin/python3
def safe_print_list_integers(my_list=[], x=0):
    i, num = 0, 0
    while i < x:
        try:
            print("{:d}".format(my_list[i]), end="")
        except (ValueError, TypeError):
            i = i + 1
            num = num + 1
            continue
        except IndexError:
            raise
        else:
            i = i + 1
    print()
    return i - num
