from numb import *

if __name__ == '__main__':
    Numb.setup(cache_out='sub-cache1', precision=20, strategy='ignore-cache')
    a = Numb(1)
    b = Numb(1)
    c = Numb(0.001)

    d = (a - b) - c
    print "(1 - 1) - 0.001 = {0}".format(d)
