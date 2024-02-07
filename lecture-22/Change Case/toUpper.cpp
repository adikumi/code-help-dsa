#include <iostream>
using namespace std;

string toUpper(string word) {
    for (int i = 0; i < word.size(); i++) {
        if ((word[i] >= 'a') && (word[i] <= 'z')) {
            word[i] = word[i] - 'a' + 'A';
        }
    }
    return word;
}

int main() {

    // taking input
    string word;
    cout << "enter a word in Lower Case : ";
    cin >> word;

    // convert the word to Upper case and print on terminal
    cout << "In Upper Case : " << toUpper(word);

    return 0;
}