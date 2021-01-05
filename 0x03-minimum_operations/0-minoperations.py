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
    last_div = 0
    while (n != 1):
        for div in range(n//2, 0, -1):
            if n % div == 0:
                if div != last_div:
                    count += 1
                    print("copy")
                count += 1
                print("paste", div)
                n = n - div
                last_div = div
                break

    return count
