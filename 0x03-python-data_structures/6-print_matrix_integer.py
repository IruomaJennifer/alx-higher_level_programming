#!/usr/bin/python3
def print_matrix_integer(matrix=[[]]):
    for mat in range(len(matrix)):
        for i in range(len(matrix[mat])):
            if i == len(matrix[mat]) - 1:
                print("{:d}".format(matrix[mat][i]), end="")
            else:
                print("{:d}".format(matrix[mat][i]), end=" ")
        print()
