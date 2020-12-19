#!/usr/bin/python3

def canUnlockAll(boxes):
    if boxes == None:
        return False
    elif len(boxes) == 0:
        return True

    checkBox = [0] * len(boxes)
    keyArray = [0]
    i = 0
    while(len(keyArray) > i):
        if checkBox[keyArray[i]] == 0:
            for elem in boxes[keyArray[i]]:
                keyArray.append(elem)
        checkBox[keyArray[i]] = 1
        i += 1

    if 0 in checkBox:
        return False

    return True
