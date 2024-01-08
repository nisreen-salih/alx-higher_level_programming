#!/usr/bin/python3
def no_c(my_string):
    ret = ""
    for a in range(len(my_string)):
        if (my_string[i] != 'c' and my_string[i] != 'C'):
            ret = ret + my_string[i]
    return ret
