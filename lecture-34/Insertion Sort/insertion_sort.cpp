#include <iostream>
using namespace std;

void insertionSort(int arr[], int size, int i = 0) {

    // base-case
    if (i >= size - 1)
        return;
    
    // process
    int element = arr[i];
    int j = i - 1;
    while (j >= 0) {
        arr[j + 1] = arr[j];
        if (arr[j] < element)
            break;
        j--;
    }
    arr[j + 1] = element;

    // recursive-relation
    insertionSort(arr, size, i + 1);

}

int main() {

    // taking input
    int size;
    cout << "enter size : ";
    cin >> size;
    int arr[100];
    cout << "enter array elements : ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    
    // insertion sort
    insertionSort(arr, size);

    // printing the sorted array
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

}
