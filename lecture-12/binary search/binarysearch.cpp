#include <iostream>
using namespace std;

int binary_search(int arr[], int size, int key);

int main()
{
    int n, arr[100], key;
    cout << "enter array-size : ";
    cin >> n;
    cout << "enter array-elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter key : ";
    cin >> key;

    cout << "binary search : " << binary_search(arr, n, key);

    return 0;
}

int binary_search(int arr[], int size, int key)
{
    int start = 0, end = (size - 1);
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (key == arr[mid])
        {
            return mid;
        }
        if (key < arr[mid])
        {
            end = mid - 1;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}