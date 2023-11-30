#!/usr/bin/python3
def add_arg(argv):
    v = len(argv) - 1
    if v == 0:
        print("{:d}".format(v))
        return
    else:
        i = 1
        add = 0
        while i <= v:
            add += int(argv[i])
            i += 1
        print("{:d}".format(add))


if __name__ == "__main__":
    import sys
    add_arg(sys.argv)

