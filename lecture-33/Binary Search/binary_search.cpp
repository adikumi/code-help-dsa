#include <iostream>
using namespace std;

bool binarySearch(int arr[], int start, int end, int key) {

    int mid = start + (end - start) / 2;
    // base-case
    if (start > end) 
        return false;
    if (arr[mid] == key) 
        return true;
    
    // recursive-relation
    if (arr[mid] < key) 
        binarySearch(arr, mid + 1, end, key);
    else
        binarySearch(arr, start, end - 1, key);
}

int main() {

    // taking input
    int size;
    cout << "enter size of array : ";
    cin >> size;
    int arr[100];
    cout << "enter array elements : ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int key;
    cout << "enter key : ";
    cin >> key;

    // binary search in array
    cout << "key present : " << binarySearch(arr, 0, size - 1, key);

    return 0;
}