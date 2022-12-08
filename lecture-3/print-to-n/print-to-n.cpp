#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "enter n : ";
    cin >> n;

    // print from 1 to n;
    int i = 1;
    while (i <= n)
    {
        cout << i << " ";
        i++;
    }
    return 0;
}