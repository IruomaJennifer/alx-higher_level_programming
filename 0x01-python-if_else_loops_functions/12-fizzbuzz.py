#!/usr/bin/python
def fizzbuzz():
    for i in range(1, 101):
        if i == 100:
            print("Buzz", end=" ")
        elif (i % 3 == 0):
            if (i % 15 == 0):
                print("FizzBuzz", end=" ")
            else:
                print("Fizz", end=" ")
        elif (i % 5 == 0):
            if (i % 15 == 0):
                print("FizzBuzz", end=" ")
            else:
                print("Buzz", end=" ")
        else:
            print(i, end=" ")
