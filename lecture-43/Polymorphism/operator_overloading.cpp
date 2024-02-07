#include <iostream>
using namespace std;

class A {
    public:
        int val;
        // operator ovdrload
        // we are forcing "+" operator to subtract two numbers, instead of adding.
        int operator+ (A obj) {
            int value1 = this -> val;
            int value2 = obj.val;
            return value2 - value1;
        }
        // overloading "()" to print something
        void operator() () {
            cout << "main Bracket Huuu" << endl;
        }
};

int main() {
    
    A x, y;
    x.val = 7;
    y.val = 10;
    cout << x + y << endl;
    // 10 + 7 = 17, but, we'll get 3.
    // "+" operator will do SUBTRACTION, as we overloaded it to do so.
    // bracket operator. LOL.
    x();
    y();
    return 0;
    
}