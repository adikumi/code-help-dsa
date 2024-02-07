#include <iostream>
using namespace std;

// In Encapsulation, we wrap the data members in a capsule (class).
// Class Student capsules all it's members, hiding the internal complexity.
class Student {
    private:
        string name;
        int std;
        char sec;
        int rollNo;
    public:
        // Setters
        void setName(string name) {
            this -> name = name;
        }
        void setStd(int std) {
            this -> std = std;
        }
        void setSec(char sec) {
            this -> sec = sec;
        }
        void setrollNo(int rollNo) {
            this -> rollNo = rollNo;
        }
        // Getters
        string getName(string name) {
            return this -> name;
        }
        int getStd(string std) {
            return this -> std;
        }
        char getSec(string sec) {
            return this -> sec;
        }
        int getRollNo(string rollNo) {
            return this -> rollNo;
        }
        // Constructor
        Student() :
            name("Name"), std(10), sec('A'), rollNo(0)
        {

        }
};

int main() {
    Student aditya;
    cout << "encapsulation achieved." << endl;
}