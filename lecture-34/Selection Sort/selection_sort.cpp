#include <iostream>
using namespace std;

void selectionSort(int arr[], int size, int i = 0) {

    // base-case
    if (i >= size - 1)
        return;
    
    // process
    int minIndex = i;
    for (int j = i + 1; j < size; j++) 
        minIndex = (arr[minIndex] > arr[j]) ? j : minIndex;
    swap(arr[minIndex], arr[i]);

    // recursive-relation
    selectionSort(arr, size, i + 1);
    
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
    
    // selection sort
    selectionSort(arr, size);

    // printing the sorted array
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

}