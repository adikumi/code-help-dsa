#include <iostream>
using namespace std;

void print_arr(int arr[], int n);
void swap_arr(int arr[], int n);

int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6}; // even
    int arr2[] = {1, 2, 3, 4, 5};    // odd

    swap_arr(arr1, 6);
    swap_arr(arr2, 5);

    cout << "alt swapped arr1 : ";
    print_arr(arr1, 6);
    cout << "alt swapped arr2 : ";
    print_arr(arr2, 5);
    return 0;
}

void swap_arr(int arr[], int n)
{
    for (int i = 0; i < n - 1; i += 2)
    {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}

void print_arr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}