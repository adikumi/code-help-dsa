#include <iostream>
using namespace std;

void mergeSorted(int arr[], int s, int e, int mid) {
  
  int len1 = mid - s + 1;
  int len2 = e - mid;
  int *arr1 = new int[len1];
  int *arr2 = new int[len2];

  for (int i = 0; i < len1; i++) {
    arr1[i] = arr[s + i];
    // cout << arr1[i] << " ";
  }
//   cout << endl;
  
  for (int i = 0; i < len2; i++) {
    arr2[i] = arr[mid + i + 1];
    // cout << arr2[i] << " ";
  }
//   cout << endl;

  int i = 0, j = 0, k = s;

  while (i < len1 && j < len2) {
    if (arr1[i] < arr2[j]) {
      arr[k] = arr1[i++];
      k++;
    }
    else if (arr1[i] > arr2[j]) {
      arr[k] = arr2[j++];
      k++;
    }
    else {
      arr[k] = arr1[i++];
      k++;
      arr[k] = arr2[j++];
      k++;
    }
  }

  while (i < len1) {
    arr[k] = arr1[i++];
    k++;
  }
  while (j < len2) {
    arr[k] = arr2[j++];
    k++;
  }

//   for (int i = s; i <= e; i++) {
//     cout << arr[i] << " ";
//   }
//   cout << endl;

  delete []arr1;
  delete []arr2;

}

void solve(int arr[], int s, int e) {

  // base-case
  if (s >= e) 
    return;
  // process
  int mid = s + (e - s) / 2;
  // recursive-relation
  solve(arr, s, mid);
  solve(arr, mid + 1, e);
  // backtrack
  mergeSorted(arr, s, e, mid);

}

void mergeSort(int arr[], int size) {
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
  
  // merge sort
  mergeSort(arr, size);

  // printing sorted array
  cout << "sorted array : ";
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  
  return 0;

}