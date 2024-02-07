#include <iostream>
using namespace std;

bool isSorted(int arr[], int size) {
    
    // base-case
    if (size == 0 || size == 1) {
        return true;
    }
    if (arr[0] > arr[1]) {
        return false;
    }

    // recursive relation
    return isSorted(arr + 1, size - 1);
}

int main() {
    
    // taking input
    int size;
    cout << "enter array size : "; 
    cin >> size;
    int arr[100];
    cout << "enter array elements : ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    // check if array is sorted
    cout <<"arr sorted : " << isSorted(arr, size) << endl;

    return 0;
    
}