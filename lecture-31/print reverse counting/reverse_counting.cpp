#include <iostream>
using namespace std;

void printCounting(int n) {

    // base case
    if (n == 0)     return;

    // processing
    cout << n << " ";

    // recursive relation
    printCounting(n - 1);
    
}

int main() {
    
    // taking input
    int n;
    cout << "enter n : ";
    cin >> n;

    // printing output
    printCounting(n);

    return 0;

}