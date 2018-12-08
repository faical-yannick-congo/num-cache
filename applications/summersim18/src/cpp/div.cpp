#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <iomanip>

int main()
{
    double a,b,c,d;
    a = 100;
    b = 1e308;
    c = 11;

    d = (a / b) / c;
    std::cout << "(100 / 1e308) / 11 = " << std::setprecision(20) << d << std::endl;

    d = a / (b * c);
    std::cout << "100 / (1e308 * 11) = " << std::setprecision(20) << d << std::endl;

    d = a / b / c;
    std::cout << "100 / 1e308 / 11 = " << std::setprecision(20) << d << std::endl;

    return 0;
}
