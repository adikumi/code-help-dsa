#include <iostream>
using namespace std;

class Human {
    public:
        int age;
};

class Male : public Human {
    public:
        void setAge(int age) {this -> age = age;}
};

int main() {
    Male ashu;
    ashu.age = 24;
    // ashu.setAge(24);
    cout << "everything is working" << endl;
}