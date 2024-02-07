#include <iostream>
#include <vector>
using namespace std;

void bubble_sort(vector<int> &arr) {
    int size = arr.size();
    for (int i = 0; i < size - 1; i++) {
        bool isSorted = true;
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                isSorted = false;
            }
        }
        if (isSorted) {
            break;
        }
    }
}

int main() {

    // taking input
    int size;
    cout << "enter size of array : ";
    cin >> size;
    vector<int> arr(size);
    cout << "enter elements of array : ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // bubble sort
    bubble_sort(arr);

    // printing the array
    cout << "sorted array : ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}