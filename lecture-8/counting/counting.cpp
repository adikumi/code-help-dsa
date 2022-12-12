#include <iostream>
using namespace std;

void print_count(int n);

int main()
{
    int n;
    cout << "enter n : ";
    cin >> n;
    print_count(n);
    return 0;
}

void print_count(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }
}