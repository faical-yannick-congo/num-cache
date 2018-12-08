#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "../../../../../cpp/numb/numb.hpp"

int main()
{
    Numb::setup("sub-cache1", "", 20, "ignore-cache");
    Numb a(1);
    Numb b(1);
    Numb c(0.001);

    Numb d = (a - b) - c;
    cout << "(1 - 1) - 0.001 = " << d << endl;
}
