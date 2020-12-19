#!/usr/bin/python3


def canUnlockAll(boxes):
    if boxes is None:
        return False
    elif len(boxes) == 0:
        return True

    box_len = len(boxes)

    keyArray = [0]
    i = 0
    while(len(keyArray) > i):
        for elem in boxes[keyArray[i]]:
            if elem not in keyArray and elem < box_len:
                keyArray.append(elem)
        i += 1

    if i == len(boxes):
        return True

    return False
