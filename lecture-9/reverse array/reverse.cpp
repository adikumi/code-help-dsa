#include <iostream>
using namespace std;

void reverse(int arr[], int rev[], int size);

int main()
{
    int size;
    cout << "enter array size : ";
    cin >> size;

    int arr[100];

    cout << "enter array element : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int rev[100];

    reverse(arr, rev, size);

    cout << "reverse array : ";
    for (int i = 0; i < size; i++)
    {
        cout << rev[i] << " ";
    }

    return 0;
}

void reverse(int arr[], int rev[], int size)
{
    for (int i = 0; i < size; i++)
    {
        rev[i] = arr[size - i - 1];
    }
}