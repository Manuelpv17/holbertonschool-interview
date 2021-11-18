#!/usr/bin/python3
""" 0x19. Making Change """


def makeChange(coins, total):
    """ 0x19. Making Change """

    count = 0
    index = 0
    length = len(coins)

    if length == 0 and total != 0:
        return -1

    coins.sort(reverse=True)

    while total > 0:
        if coins[index] <= total:
            total -= coins[index]
            count += 1
        else:
            index += 1
            if index >= length:
                return -1

    return count
