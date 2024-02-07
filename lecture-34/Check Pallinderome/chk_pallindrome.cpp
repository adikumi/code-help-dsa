#include <iostream>
using namespace std;

bool chkPallindrome(string &str, int i = 0) {

    //base-case
    if (i >= str.length() - i - 1) 
        return true;
    else if (str[i] != str[str.length() - i - 1])
        return false;
    // recursive-relation
    return chkPallindrome(str, i + 1);
}

int main() {

    // taking input
    string str;
    cout << "enter string : ";
    cin >> str;

    // check if string is pallindrome
    cout << "check pallindrome : " << chkPallindrome(str);

}