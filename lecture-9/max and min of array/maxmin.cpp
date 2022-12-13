#include <iostream>
using namespace std;

int arrmax(int arr[], int size);

int arrmin(int arr[], int size);

int main()
{
    int size;
    cout << "enter size of array : ";
    cin >> size;

    int arr[100];

    cout << "enter elements of array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "max element : " << arrmax(arr, size) << endl;
    cout << "min element : " << arrmin(arr, size);

    return 0;
}

int arrmax(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

int arrmin(int arr[], int size)
{
    int min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}