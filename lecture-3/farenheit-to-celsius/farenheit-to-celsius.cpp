#include <iostream>
using namespace std;

int main()
{
    float farenheit;
    cout << "enter temeperature in farenheit : ";
    cin >> farenheit;
    float celsius = (5.0 / 9 * (farenheit - 32));
    cout << "temerature in celsius : " << celsius;
    return 0;
}