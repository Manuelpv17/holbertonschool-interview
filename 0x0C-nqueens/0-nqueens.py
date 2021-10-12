#!/usr/bin/python3
""" 0x0C. N Queens """

import sys


def nQueensSolution(n):
    """ 0x0C. N Queens """

    board = [0 for _ in range(n)]
    result = []

    get_result(board, result, n, 0)
    return populate_result(result, n)


def get_result(board, result, n, row):
    """ 0x0C. N Queens """

    if row == n:
        result.append(list(board))
        return True

    for i in range(len(board)):
        if check(i, row, board):
            board[row] = i
            get_result(board, result,
                       n, row + 1)


def check(col, row, board):
    """ 0x0C. N Queens """

    for j in range(row):
        prev_col = board[j]
        similar_col = prev_col == col
        similar_axes = abs(col - prev_col) ==\
            abs(row - j)

        if similar_col or similar_axes:
            return False

    return True


def populate_result(result, n):
    """ 0x0C. N Queens """

    for solution_index in range(len(result)):
        temp_list = []
        for col_index in range(n):
            temp_list.append(
                [col_index, result[solution_index][col_index]])
        print(temp_list)


if len(sys.argv) != 2:
    print("Usage: nqueens N")
    sys.exit(1)

n = sys.argv[1]

try:
    n = int(n)
except ValueError:
    print("N must be a number")
    sys.exit(1)

if n < 4:
    print("N must be at least 4")
    sys.exit(1)

nQueensSolution(n)
