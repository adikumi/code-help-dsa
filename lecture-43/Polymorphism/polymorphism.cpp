#include <iostream>
using namespace std;

// this is an example of function overloading
class Math {
    public:
    int multiply(int a, int b) {
        return a * b;
    }
    int multiply(int a, int b, int c) {
        return a * b * c;
    }
};

int main() {
    Math m;
    cout << m.multiply(2, 3) << endl;
    cout << m.multiply(2, 3, 4) << endl;
}