if __name__ == '__main__':
    a = 100
    b = 1e308
    c = 11
    d = (a / b) / c
    print("(100 / 1e308) / 11 = %01.20e" % d)

    d = a / (b * c)
    print("100 / (1e308 * 11) = %01.20e" % d)

    d = a / b / c
    print("100 / 1e308 / 11 = %01.20e" % d)
