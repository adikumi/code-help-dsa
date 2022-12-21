#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int k)
{
    int ans = -1;
    int start = 0, end = (n - 1);
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] < k)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return ans;
}

int main()
{
    int n, k;
    int arr[100];
    cout << "enter array-length : ";
    cin >> n;
    cout << "enter array elements :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter key : ";
    cin >> k;
    cout << "first occurence of " << k << " : " << firstOcc(arr, n, k);
}