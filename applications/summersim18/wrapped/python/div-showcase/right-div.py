from numb import *

if __name__ == '__main__':
    Numb.setup(cache_out='div-cache2', cache_in='div-cache1', precision=20, strategy='use-cache')
    a = Numb(100)
    b = Numb(1e308)
    c = Numb(11)

    d = a / (b * c)
    print "100 / (1e308 * 11) = {0}".format(d)
