#include <iostream>
using namespace std;

int main()
{
    // take input n
    int n;
    cout << "enter n : ";
    cin >> n;

    // calculate sum from 1 to n
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    // print sum on terminal
    cout << "sum to " << n << " : " << sum << endl;

    return 0;
}