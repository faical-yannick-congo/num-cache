#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "../../../../../cpp/numb/numb.hpp"

int main()
{
    Numb::setup("add-cache2", "add-cache1", 20, "use-cache");
    Numb a(0.001);
    Numb b(1);
    Numb c(-1);

    Numb d = a + (b + c);
    cout << "0.001 + (1 + -1) = " << d << endl;

    return 0;
}
