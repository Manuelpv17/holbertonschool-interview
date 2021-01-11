#!/usr/bin/python3
"""
In a text file, there is a single character H.
Your text editor can execute only two operations
in this file: Copy All and Paste. Given a number n,
write a method that calculates the fewest number
of operations needed to result in exactly n H
characters in the file.
"""


def minOperations(n):
    """ Min Operations"""
    if n <= 0:
        return 0

    count = 0
    copy = 0
    num = 1

    while (1):
        if n % num == 0:
            count += 1
            copy = num

        num += copy
        count += 1

        if num == n:
            return count

    return 0
