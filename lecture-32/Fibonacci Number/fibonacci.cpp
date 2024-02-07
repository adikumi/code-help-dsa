#include <iostream>
using namespace std;

int fib(int n) {

    // base-case
    if (n == 0 || n == 1) {
        return 1;
    }

    // recursive-relation
    return fib(n - 1) + fib(n - 2);

}

int main() {
    
    // taking input
    int n;
    cout << "enter n : ";
    cin >> n;

    // printing number at n-th place of fibonacci series
    cout << "fibonacci of n : " << fib(n);
    
    return 0;
    
}