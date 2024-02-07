#include <iostream>
#include <vector>
using namespace std;

void insertion_sort(vector<int> &arr) {
    for (int i = 1; i < arr.size(); i++) {
        int temp = arr[i];
        int j = i - 1;
        for (j; j >= 0; j--) {
            if (arr[j] > temp) {
                arr[j + 1] = arr[j];
            }
            else {
                break;
            }
        }
        arr[j + 1] = temp;
    }
}

int main() {

    // taking input
    int size;
    cout << "enter size of array : ";
    cin >> size;
    vector<int> arr(size);
    cout << "enter array elements : ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // insertion sort
    insertion_sort(arr);

    // printing the array
    cout << "sorted array : ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}