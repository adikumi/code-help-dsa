#include <iostream>
using namespace std;

int main()
{
    int a = 4, b = 6;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "bitwise operations :" << endl;
    cout << a << " or " << b << " : " << (a | b) << endl;
    cout << a << " and " << b << " : " << (a & b) << endl;
    cout << "not " << a << " : " << (~a) << endl;
    cout << "not " << b << " : " << (~b) << endl;
    cout << a << " xor " << b << " : " << (a ^ b) << endl;
    cout << "left-shift " << a << " by 1 : " << (a << 1) << endl;
    cout << "right-shift " << a << " by 1 : " << (a >> 1) << endl;
    cout << "left-shift " << b << " by 1 : " << (b << 1) << endl;
    cout << "right-shift " << b << " by 1 : " << (b >> 1) << endl;

    return 0;
}