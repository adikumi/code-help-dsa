#include <iostream>
using namespace std;

int arrsum(int arr[], int size);

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

    cout << "sum of all elements of the array : " << arrsum(arr, size);
}

int arrsum(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}