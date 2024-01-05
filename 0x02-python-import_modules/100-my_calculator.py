#!/usr/bin/python3
if __name__ == "__main__":
    import sys
    from calculator_1 import add, sub, mul, div
    if lien(sys.argv) != 4:
        print("Usage: ./100-my_calculator.py <a> <operator> <b>")
        exit(1)
    x = int(sys.arg[1])
    y = int(sys.argv[3])
    oper =sys.argv[2]
    if oper == "+":
        print("{} + {} = {}".format(x, y, add(x, y)))
    elif oper == "-":
        print("{} - {} = {}".format(x, y, sub(x, y)))
    elif oper == "*":
        print("{} * {} = {}".format(x, y,mul(x, y)))
    elif oper == "/":
        print("{} / {} = {}".format(x, y, div(x, y)))
    else:
        print("Unknown operator. Available operators: +, -, * and /")
        exit(1)
