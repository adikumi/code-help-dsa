#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "enter n :";
    cin >> n;

    // sum of all even numbers till n
    int i = 0, sum = 0;
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
        i++;
    }
    cout << "sum of all even numbers till " << n << " = " << sum;
    return 0;
}