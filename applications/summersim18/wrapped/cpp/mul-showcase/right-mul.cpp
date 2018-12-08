#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <float.h>
#include "../../../../../cpp/numb/numb.hpp"

int main()
{
    Numb::setup("mul-cache2", "mul-cache1", 20, "use-cache");
    Numb a(0.001);
    Numb b(1e308);
    Numb c(11);

    Numb d = a * (b * c);
    cout << "0.001 * (1e308 * 11) = " << d << endl;

    return 0;
}
