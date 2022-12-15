#include <iostream>
using namespace std;

int main()
{
    // input
    int a, b;
    cout << "enter a and b : ";
    cin >> a >> b;

    // swap
    int temp = a;
    a = b;
    b = temp;

    // print result
    cout << "after swapping : a = " << a << " and b = " << b;

    return 0;
}
