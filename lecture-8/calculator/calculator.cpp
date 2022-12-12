#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "entre a : ";
    cin >> a;
    cout << "enter b : ";
    cin >> b;
    char op;
    cout << "enter operation : ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << a << " " << op << " " << b << " = " << (a + b) << endl;
        break;

    case '-':
        cout << a << " " << op << " " << b << " = " << (a - b) << endl;
        break;

    case '*':
        cout << a << " " << op << " " << b << " = " << (a * b) << endl;
        break;

    case '/':
        cout << a << " " << op << " " << b << " = " << (float)(a / b) << endl;
        break;

    case '%':
        cout << a << " " << op << " " << b << " = " << (a & b) << endl;
        break;

    default:
        cout << "invalid operation.";
        break;
    }
    return 0;
}