#include <iostream>
using namespace std;

bool linear_search(int arr[], int size, int key);

int main()
{
    int size;
    cout << "enter array size : ";
    cin >> size;

    int arr[100];
    cout << "enter array elements : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "enter key : ";
    cin >> key;

    cout << "linear search result : " << linear_search(arr, size, key);

    return 0;
}

bool linear_search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (key == arr[i])
        {
            return true;
        }
    }
    return false;
}