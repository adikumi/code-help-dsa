#include <iostream>
#include <vector>
using namespace std;

void reverse_array(vector<int> &arr) {
    int i = 0, j = arr.size() - 1;
    while (i < j) {
        swap(arr[i], arr[j]);
        i++, j--;
    }
}

int main() {

    // taking input
    int size;
    cout << "enter array size : ";
    cin >> size;
    vector<int> arr(size);
    cout << "enter array elements : ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // reverse array
    reverse_array(arr);

    // printing the array
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}