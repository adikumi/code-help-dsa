#include <iostream>
using namespace std;

void sayDigits(int n, string arr[]) {

    // base case
    if (n == 0) {
        return;
    }

    // recursive relation
    sayDigits(n / 10, arr);

    // printing (processing)
    int digit = n % 10;
    cout << arr[digit] << " ";

}

int main() {
    
    // taking input
    int n;
    cout << "enter number : ";
    cin >> n;
    string arr[10] = {
        "Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"
    };

    // printing result
    cout << "The number is : ";
    sayDigits(n, arr);
    
    return 0;
    
}