#include <iostream>
using namespace std;

int main()
{
    int money = 1770;
    int n100 = 0, n50 = 0, n20 = 0, n1 = 0;

    switch (1)
    {
    case 1:
        n100 = money / 100;
        money -= 100 * n100;

    case 2:
        n50 = money / 50;
        money -= 50 * n50;

    case 3:
        n20 = money / 20;
        money -= 20 * n20;

    case 4:
        n1 = money / 1;
        money -= 1 * n1;
        break;

    default:
        break;
    }

    cout << "number of notes :" << endl;
    cout << "Rs. 100 notes : " << n100 << endl;
    cout << "Rs. 50 notes : " << n50 << endl;
    cout << "Rs. 20 notes : " << n20 << endl;
    cout << "Rs. 1 notes : " << n1 << endl;
}