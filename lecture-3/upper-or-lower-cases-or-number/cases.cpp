#include <iostream>
using namespace std;

int main()
{
    char c;
    cout << "enter a character : ";
    cin >> c;

    // check if c is a upper case, lower case, or a number

    if (c >= 'A' && c <= 'Z')
    {
        cout << c << " is in upper case.";
    }
    else if (c >= 'a' && c <= 'z')
    {
        cout << c << " is in lower case.";
    }
    else if (c >= '0' && c <= '9')
    {
        cout << c << " is a digit.";
    }
    else
    {
        cout << "invalid character.";
    }
    return 0;
}