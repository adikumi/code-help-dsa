#include <iostream>
using namespace std;

int power(int a, int b) {
    // base-case
    if (b == 0) 
        return 1;
    // recursive-relation
    if (b & 1)
        return a * power(a, b / 2) * power(a, b / 2);
    else 
        return power(a, b / 2) * power(a, b / 2);
}

int main() {
    
    // taking input
    int a, b;
    cout << "enter a and b : ";
    cin >> a >> b;

    // a power b
    cout << "a power b : " << power(a, b) << endl;

}