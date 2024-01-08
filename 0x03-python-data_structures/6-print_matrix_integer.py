#!/usr/bin/python3
def print_matrix_integer(matrix=[[]]):
    if not matrix:
        return None
    for smatrix in matrix:
        if len(smatrix) == 0:
            print()
        for a in range(len(smatrix)):
            print("{:d}".format(smatrix[a]),
                    end="\n" if a is len(smatrix)  1 else " ")
