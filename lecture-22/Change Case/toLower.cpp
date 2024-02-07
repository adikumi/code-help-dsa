#include <iostream>
using namespace std;

string toLower(string word) {
    for (int i = 0; i < word.size(); i++) {
        if ((word[i] >= 'A') && (word[i] <= 'Z')) {
            word[i] = word[i] - 'A' + 'a';
        }
    }
    return word;
}

int main() {

    // taking input
    string word;
    cout << "enter a word in Upper Case : ";
    cin >> word;

    // convert the word to lower case and print on terminal
    cout << "In Lower Case : " << toLower(word);

    return 0;
}