#include <iostream>
using namespace std;

int strLentgh(char str[]) {
    int len = 0;
    for (int i = 0; str[i] != '\0'; i++)    len++;
    return len;
}

int main() {
    
    // taking input
    char str[20];
    cout << "enter string : ";
    cin >> str;

    // length of string
    int length = strLentgh(str);

    // printing the result
    cout << "length of str : " << length << endl;

    return 0;
}