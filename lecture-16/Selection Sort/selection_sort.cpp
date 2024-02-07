#include <iostream>
#include <vector>
using namespace std;

void selection_sort(vector<int> &arr) {
    int size = arr.size();
    for (int i = 0; i < size - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[min_index] > arr[j]) {
                min_index = j;
            }
        }
        swap(arr[i], arr[min_index]);
    }
}

int main() {
    
    // taking input
    int size;
    cout << "enter size of array : ";
    cin >> size;
    vector<int> arr(size);
    cout << "enter the elemenets of array : ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // selection sort
    selection_sort(arr);

    // printing athe array
    cout << "sorted array : ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}