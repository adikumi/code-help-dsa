#include <iostream>
using namespace std;

int powerOf2(int n) {
    
    // base case
    if (n == 0) {
        return 1;
    }
    // recursive relation
    return 2 * powerOf2(n - 1);
}

int main() {
    
    // taking input
    int n;
    cout << "enter n : ";
    cin >> n;

    // calculating output and printing on terminal
    cout << "power of 2 : " << powerOf2(n) << endl;

    return 0;

}