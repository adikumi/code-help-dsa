#include <iostream>
using namespace std;

int apterm(int n);

int main()
{
    cout << "AP : 3n + 7" << endl;
    int n;
    cout << "enter n : ";
    cin >> n;

    cout << n << "-th term of the ap = " << apterm(n);
}

int apterm(int n)
{
    return (3 * n + 7);
}