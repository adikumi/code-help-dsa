#include <iostream>
using namespace std;

int main()
{
    int arr[100];

    for (int i = 0; i < 100; i++)
    {
        arr[i] = 1;
    }

    for (int i = 0; i < 100; i++)
    {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }
    return 0;
}

// designated initializers can do this in 1 line.
// http://gcc.gnu.org/onlinedocs/gcc/Designated-Inits.html
// https://stackoverflow.com/questions/1065774/initialization-of-all-elements-of-an-array-to-one-default-value-in-c