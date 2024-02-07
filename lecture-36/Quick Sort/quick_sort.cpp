#include <iostream>
using namespace std;

int partition(int arr[], int s, int e) {
    // consider the first element is pivot
    int pivot = arr[s];
    // finding correct position of pivot
    int pivotIndex = s;
    for (int i = s + 1; i <= e; i++) {
        if (arr[i] <= pivot)
            pivotIndex++;
    }
    // placing pivot at right position
    swap(arr[s], arr[pivotIndex]);
    // placing remaining elements in right partition
    int i = s, j = e;
    while (i < pivotIndex && j > pivotIndex) {
        if ((arr[i] > pivot) && (arr[j] < pivot)) {
            swap(arr[i], arr[j]);
            i++, j--;
        }
        else if (arr[i] < pivot)
            i++;
        else
            j--;
    }
    return pivotIndex;
}

void solve(int arr[], int s, int e) {
    // base-case
    if (s >= e)
        return;
    // process
    int pivotIndex = partition(arr, s, e);
    // recursive relation
    solve(arr, 0, pivotIndex - 1);
    solve(arr, pivotIndex + 1, e);
    // backtrack

}

void quickSort(int arr[], int size) {
  solve(arr, 0, size - 1);
}

int main() {
  
  // taking input
  int size;
  cout << "enter array size : ";
  cin >> size;
  int arr[100];
  cout << "enter array elements : ";
  for (int i = 0; i < size; i++) 
    cin >> arr[i];
  
  // quick sort
  quickSort(arr, size);

  // printing sorted array
  cout << "sorted array : ";
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  
  return 0;

}