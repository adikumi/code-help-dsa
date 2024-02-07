#include <iostream>
using namespace std;

void solve(string &str, int i = 0) {

    // base-case
    if (i >= str.length() - i - 1)
        return;

    // processing
    swap(str[i], str[str.length() - i - 1]);

    // recursive-relation
    solve(str, i + 1);

}

string reverseString(string str) {
    solve(str);
    return str;
}

int main() {

    // taking input
    string str;
    cout << "enter string : ";
    cin >> str;

    // rever the string using recursion
    cout << reverseString(str);

}