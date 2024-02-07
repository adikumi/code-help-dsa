#include <iostream>
using namespace std;

int factorial(int n) {

    // base case
    if (n == 0) {
        return 1;
    }

    // recursive relation
    return n * factorial(n - 1);

}

int main() {
    
    // taking input
    int n;
    cout << "enter number : ";
    cin >> n;

    // calcualting output and printing to terminal
    cout << "factorial : " << factorial(n);

    return 0;
    
}