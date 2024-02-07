#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (a != b) {
        if ((a == 0) || (b == 0))       break;
        if (a > b)                      a = a - b;
        if (b > a)                      b = b - a;
    }
    return max(a, b);
}

int main() {
    
    // taking inputs
    int a, b;
    cout << "enter values of a & b : ";
    cin >> a >> b;

    // printing result
    cout << "HCF of a & b : " << gcd(a, b);

    return 0;
}