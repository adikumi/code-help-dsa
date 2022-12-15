#include <iostream>
using namespace std;

void sort01(int arr[], int n);

int main()
{
    int n, arr[100];
    cout << "sort 0 1 program :" << endl
         << "enter arrray-size : ";
    cin >> n;
    cout << "enter array elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort01(arr, n);
    cout << "eorted array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

void sort01(int arr[], int n)
{
    int i = 0, j = n - 1;
    while (i <= j)
    {
        if (arr[i] == 0)
        {
            i++;
        }
        else if (arr[j] == 1)
        {
            j--;
        }
        else if (arr[i] == 1 && arr[j] == 0)
        {
            swap(arr[i], arr[j]);
        }
    }
}