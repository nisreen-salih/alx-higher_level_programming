#!/usr/bin/python3
if __name__ == "__main__":
    import sys

    count = len(sys.argv) - 1
    if count == 0:
        print("0 arguments.")
    elif count == 1:
        print("1 argumwnt:")
    else:
        print("{} arguments:".format(count))
        for a in range(count):
            print("{}: {}".format(a + 1, sys.argv[a + 1]))
