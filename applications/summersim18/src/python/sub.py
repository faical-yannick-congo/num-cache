if __name__ == '__main__':
    a = 1
    b = 1
    c = 0.001
    d = (a - b) - c
    print("(1 - 1) - 0.001 = %01.20f" % d)

    d = a - (b + c)
    print("1 - (1 + 0.001) = %01.20f" % d)

    d = a - b - c
    print("1 - 1 - 0.001 = %01.20f" % d)
