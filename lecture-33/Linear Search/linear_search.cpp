#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key) {

    // base-case
    if (size == 0) 
        return false;
    if (arr[0] == key) 
        return true;

    // recursive-relation
    return linearSearch(arr + 1, size - 1, key);
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

    // linear search in array
    cout << "key present : " << linearSearch(arr, size, key);

    return 0;
}