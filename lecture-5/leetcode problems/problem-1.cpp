#include <iostream>
using namespace std;

int SubtractProductAndSum(int n);

int main()
{
    // take input
    int number;
    cout << "enter number : ";
    cin >> number;

    // solve the problem
    cout << SubtractProductAndSum(number);
}

int SubtractProductAndSum(int n)
{
    int product = 1, sum = 0;

    while (n > 0)
    {
        int r = n % 10;
        n = (n - r) / 10;
        sum += r;
        product *= r;
    }

    return (product - sum);
}

// leetcode problem 1281