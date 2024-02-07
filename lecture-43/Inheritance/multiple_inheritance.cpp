#include <iostream>
using namespace std;

class Med {
    public:
        int bio;
        int chem;
};

class Engg {
    public:
        int maths;
        int chem;
};

class Combined : public Med, public Engg {

};

int main() {
    Combined rohan;
    rohan.bio = 70;
    rohan.maths = 65;
    // scope-resolution to fix multiple instances of same member function in child class
    rohan.Med::chem = 75;
    rohan.Engg::chem = 76;
    cout << "fine" << endl;
}