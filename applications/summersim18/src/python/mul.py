if __name__ == '__main__':
    a = 0.001
    b = 1e308
    c = 11
    d = (a * b) * c
    print("(0.001 * 1e308) * 11 = %01.20e" % d)

    d = a * (b * c)
    print("0.001 * (1e308 * 11) = %01.20e" % d)

    d = a * b * c
    print("0.001 * 1e308 * 11 = %01.20e" % d)
