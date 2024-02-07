#include <iostream>
using namespace std;

bool check_pallindrome(string str) {
    int start = 0, end = str.size() - 1;
    while (start < end) {
        if (str[start] != str[end]) {
            return 0;
        }
        start++, end--;
    }
    return 1;
}

int main() {

    // taking input
    string str;
    cout << "enter a string : ";
    cin >> str;

    // check pallindrome and tell answer
    cout << "is pallindrome : " << check_pallindrome(str);

    return 0;
}