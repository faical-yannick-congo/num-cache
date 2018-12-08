#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <iomanip>

int main()
{
    double a,b,c,d;
    a = 1;
    b = 1;
    c = 0.001;
    d = (a - b) - c;
    std::cout << "(1 - 1) - 0.001 = " << std::setprecision(20) << d << std::endl;

    d = a - ( b + c);
    std::cout << "1 - (1 + 0.001) = " << std::setprecision(20) << d << std::endl;

    d = a - b - c;
    std::cout << "1 - 1 - 0.001 = " << std::setprecision(20) << d << std::endl;
}
