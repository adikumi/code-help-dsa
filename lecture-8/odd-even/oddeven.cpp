#include <iostream>
using namespace std;

int oddeven(int n);

int main()
{
    int num;
    cout << "enter number : ";
    cin >> num;

    int result = oddeven(num);

    if (result)
    {
        cout << num << " is an odd number.";
    }
    else
    {
        cout << num << " is an even number.";
    }
    return 0;
}

int oddeven(int n)
{
    if (n & 1 == 1)
    {
        return 1;
    }
    return 0;
}