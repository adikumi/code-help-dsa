#include <iostream>
using namespace std;

// Example 1
class Parent {
    public:
    void work() {
        cout << "i do job" << endl;
    }
};

class Child : public Parent {
    public:

    // work() is already defined by the parent. But, in child class we are redefining it.
    // this is called "Method Overriding".
    void work() {
        cout << "i do business" << endl;
    }
};

// Example 2
class Animal {
    public:
        void speak() {
            cout << "speaking" << endl;
        }
};

class Dog : public Animal {
    public:
        void speak() {
            cout << "barking" << endl;
        }
};

int main() {
    // example 1
    Child c;
    c.work();
    // example 2
    Dog d;
    d.speak();
    
    return 0;
    
}