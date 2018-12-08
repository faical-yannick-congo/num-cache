#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <iomanip>

int main()
{
    double a,b,c,d;
    a = 0.001;
    b = 1;
    c = -1;
    d = (a + b) + c;
    std::cout << "(0.001 + 1) + -1 = " << std::setprecision(20) << d << std::endl;

    d = a + (b + c);
    std::cout << "0.001 + (1 + -1) = " << std::setprecision(20) << d << std::endl;

    d = a + b + c;
    std::cout << "0.001 + 1 + -1 = " << std::setprecision(20) << d << std::endl;

    return 0;
}
