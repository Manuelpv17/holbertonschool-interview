#!/usr/bin/python3
"""
0x1F. Pascal's Triangle
"""


def pascal_triangle(n):
    """ 0x1F. Pascal's Triangle """
    pascal = []

    if (n <= 0):
        return pascal

    for n_row in range(1, n + 1):
        row = [1] * n_row
        for n_col in range(n_row):
            if n_row > 2 and n_col != 0 and n_col != n_row - 1:
                row[n_col] = pascal[n_row - 2][n_col - 1] + \
                    pascal[n_row - 2][n_col]
        pascal.append(row)
    return pascal
