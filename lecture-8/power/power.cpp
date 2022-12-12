#include <iostream>
using namespace std;

int power(int a, int b);

int main()
{
    int a, b;
    cout << "enter a : ";
    cin >> a;
    cout << "enter b : ";
    cin >> b;
    cout << a << " to the power " << b << " = " << power(a, b);
    return 0;
}

int power(int a, int b)
{
    int result = 1;
    for (int i = 1; i <= b; i++)
    {
        result = result * a;
    }
    return result;
}