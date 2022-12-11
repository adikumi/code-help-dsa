#include <iostream>
using namespace std;

int main()
{
    // take input
    int n;
    cout << "enter n : ";
    cin >> n;

    // print fibonacci sequence till n
    int n1 = 0, n2 = 1, n3;
    cout << n1 << " " << n2 << " ";
    for (int i = 1; i <= n - 2; i++)
    {
        int nextnumber = n1 + n2;
        cout << nextnumber << " ";
        n1 = n2;
        n2 = nextnumber;
    }

    return 0;
}