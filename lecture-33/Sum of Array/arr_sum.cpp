#include <iostream>
using namespace std;

int arrSum(int arr[], int size) {

    // base-case
    if (size == 0) return 0;
    if (size == 1) return arr[0];

    // recursive-relation
    return arr[0] + arrSum(arr + 1, size - 1);

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

    // sum of array
    cout << "sum of array : " << arrSum(arr, size);
    
    return 0;
    
}