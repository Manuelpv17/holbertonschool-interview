#!/usr/bin/python3

def canUnlockAll(boxes):
    if boxes == None:
        return False
    elif len(boxes) == 0:
        return True

    keyArray = [0]
    i = 0
    while(len(keyArray) > i):
        for elem in boxes[keyArray[i]]:
            if elem not in keyArray:
                keyArray.append(elem)
        i += 1

    if i == len(boxes):
        return True

    return False
