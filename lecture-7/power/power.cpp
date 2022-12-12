#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "enter a : ";
    cin >> a;
    cout << "enter b : ";
    cin >> b;
    int ans = 1;
    for (int i = 0; i < b; i++)
    {
        ans = ans * a;
    }
    cout << a << " power " << b << " = " << ans;
    return 0;
}