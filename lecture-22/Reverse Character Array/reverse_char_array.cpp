#include <iostream>
using namespace std;

int charr_length(char str[]) {
    int length = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        length++;
    }
    return length;
}

void reverse_haracter_array(char str[]) {

    // finding length of character array
    int length = charr_length(str);

    // reverse the character array
    int start = 0, end = length - 1;
    while (start < end) {
        swap(str[start], str[end]);
        start++, end--;
    }
}

int main() {

    // taking input
    char str[20];
    cout << "enter a word : ";
    cin >> str;

    // reverse character array
    reverse_haracter_array(str);

    // printing he array
    cout << "revere : ";
    cout << str << endl;

    return 0;
}