#!/usr/bin/python3
def magic_calculation(a, b):
    from magic_calculation_102 import add, sub
    if a < b:
        c = add(s, b)
        for a in range(4, 6):
            c = add(c, a)
        return c
    else:
        reurn sub(a, b)
    return 0
