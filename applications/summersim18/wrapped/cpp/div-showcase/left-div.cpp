#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "../../../../../cpp/numb/numb.hpp"

int main()
{
    Numb::setup("div-cache1", "", 20, "ignore-cache");
    Numb a(100);
    Numb b(1e308);
    Numb c(11);

    Numb d = (a / b) / c;
    cout << "(100 / 1e308) / 11 = " << d << endl;

    return 0;
}
