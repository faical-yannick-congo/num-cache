from numb import *

if __name__ == '__main__':
    Numb.setup(cache_out='mul-cache2', cache_in='mul-cache1', precision=20, strategy='use-cache')
    a = Numb(0.001)
    b = Numb(1e308)
    c = Numb(11)
    
    d = a * (b * c)
    print "0.001 * (1e308 * 11) = {0}".format(d)
