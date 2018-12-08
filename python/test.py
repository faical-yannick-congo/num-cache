from numb import *

if __name__ == '__main__':
    Numb.setup(cache_out='cache2', cache_in='cache1', precision=5, strategy='ignore-cache')
    # Numb.setup(cache_out='cache1', precision=5)
    # Numb.setup(cache_in='cache2')
    num1 = Numb(1.28763)
    num2 = Numb(-23.5829)
    num3 = num1 + num2
    print "{0} + {1} = {2}".format(num1, num2, num3)
    num4 = num1 + num2 + num3
    print "sum [num1, num2, num3] = {0}".format(num4)
    num5 = num4 * num1
    num6 = num5 / num4
    num7 = exp(num5)