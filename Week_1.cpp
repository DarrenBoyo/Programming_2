#include <iostream>

using namespace std;

int main()
{
    double degrees;
    cout << "Enter a degree in Celsius: ";
    cin >> degrees;
    double farenheit = (1.8*degrees) + 32;
    cout << degrees <<" Degrees Celcius is "<< farenheit<<" in Farenheit.";
    return 0;
}
