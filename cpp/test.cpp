#include "numb/numb.hpp"

int main(){
    Numb::setup("cache2", "cache1", 5, "ignore-cache");
    // Numb::setup("cache1", "", 5, "ignore-cache");
    Numb num1(1.28763);
    Numb num2(-23.5829);
    Numb num3 = num1 + num2;
    // cout << 1.28763 << " + " << -23.5829 << " = " << 1.28763 - 23.5829<< endl;
    cout << num1 << " + " << num2 << " = " << num3 << endl;
    Numb num4 = num1 + num2 + num3;
    cout << "sum [num1, num2, num3] = " << num4 << endl;
    Numb num5 = num4 * num1;
    Numb num6 = num5 / num4;
    Numb num7 = Numb::exp(num5);
}