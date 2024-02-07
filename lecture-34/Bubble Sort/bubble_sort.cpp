#include <iostream>
using namespace std;

// void bubbleSort(int arr[], int size) {
//     for (int i = 0; i < size - 1; i++) {
//         bool swapped = false;
//         for (int j = 0; j <= size - i - 1; j++) {
//             if (arr[j] > arr[j + 1])
//                 swap(arr[j], arr[j + 1]);
//                 swapped = true;
//         }
//         if (!swapped)
//             break;
//     }
// }

void bubbleSwap(int arr[], int size, int j = 0) {
    // base-case
    if (j >= size - 1)
        return;
    // processing
    if (arr[j] > arr[j + 1])
        swap(arr[j], arr[j + 1]);
    // recursive-relation
    bubbleSwap(arr, size, j + 1);
}

void bubbleSort(int arr[], int size) {

    // base-case
    if (size == 1 || size == 0)
        return;
    // processing
    bubbleSwap(arr, size);
    // recursive-relation
    bubbleSort(arr, size - 1);
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

    // bubble sort
    bubbleSort(arr, size);

    // printing the sorted array
    cout << "sorted array : ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}