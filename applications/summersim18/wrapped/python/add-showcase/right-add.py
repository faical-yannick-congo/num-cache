from numb import *

if __name__ == '__main__':
    Numb.setup(cache_out='add-cache2', cache_in='add-cache1', precision=20, strategy='use-cache')
    a = Numb(0.001)
    b = Numb(1)
    c = Numb(-1)

    d = a + (b + c)
    print "0.001 + (1 + -1) = {0}".format(d)
