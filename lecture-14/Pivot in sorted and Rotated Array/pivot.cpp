#include <iostream>
#include <vector>
using namespace std;

int findPivot(vector<int> arr) {
    int start = 0, end = arr.size() - 1;
    while (start < end) {
        int mid = start + (end - start) / 2;
        // if (arr[mid] < arr[mid - 1]) {
        //     return mid + 1;
        // }
        if (arr[mid] <= arr[arr.size() - 1]) {
            end = mid;
        }
        else {
            start = mid + 1;
        }
    }
    return end;
}

int main() {
    
    // taking input
    int size;
    cout << "enter size of the array : ";
    cin >> size;
    vector<int> arr(size);
    cout << "enter array elements : ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // find pivot in sorted and rotated array
    cout << "Pivot Element : " << findPivot(arr) << endl;

    return 0;
}