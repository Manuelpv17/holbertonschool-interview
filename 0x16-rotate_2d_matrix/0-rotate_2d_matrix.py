#!/usr/bin/python3

def rotate_2d_matrix(matrix):
    """ Rotate 2d matrix 90 degrees """

    n = len(matrix)

    for row in range(n):
        for col in range(row, n):
            matrix[row][col], matrix[col][row] = matrix[col][row], matrix[row][col]

    for i in range(n):
        matrix[i].reverse()
