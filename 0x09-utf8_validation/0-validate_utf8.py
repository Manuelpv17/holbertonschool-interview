#!/usr/bin/python3
"""
UTF-8 Validation
"""


def validUTF8(data):
    """ UTF-8 Validation """
    flag_num = 0
    for elem in data:
        b_elem = '{0:08b}'.format(elem)[-8:]
        if flag_num == 0:
            len_num = 0
            for digit in b_elem:
                if digit == "1":
                    len_num += 1
                else:
                    break
                if len_num > 4:
                    return False
            if len_num == 1:
                return False
            if len_num != 0:
                flag_num = 1
                len_num -= 1
        else:
            if b_elem[:2] != "10":
                return False
            len_num -= 1
            if len_num == 0:
                flag_num = 0

    if len_num > 0:
        return False

    return True
