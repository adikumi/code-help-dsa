#include <iostream>
#include <vector>
using namespace std;

vector<int> merge_sorted(vector<int> &arr, vector<int> &brr) {
    vector<int> merge;
    int i = 0, j = 0;
    int sizea = arr.size();
    int sizeb = brr.size();
    while (i < sizea && j < sizeb) {
        if (arr[i] < brr[j]) {
            merge.push_back(arr[i]);
            i++;
        }
        else {
            merge.push_back(brr[j]);
            j++;
        }
    }
    while (i < sizea) {
        merge.push_back(arr[i]);
        i++;
    }
    while (j < sizeb) {
        merge.push_back(brr[j]);
        j++;
    }
    return merge;
}

int main() {
    
    // taking input
    int sizea, sizeb;
    cout << "enter array 'arr' & 'brr' size : ";
    cin >> sizea >> sizeb;
    vector<int> arr(sizea);
    vector<int> brr(sizeb);
    cout << "enter array 'arr' elements : ";
    for (int i = 0; i < sizea; i++) {
        cin >> arr[i];
    }
    cout << "enter array 'brr' elements : ";
    for (int i = 0; i < sizeb; i++) {
        cin >> brr[i];
    }

    // merge sorted arrays
    vector<int> merged_sorted = merge_sorted(arr, brr);

    // printing the output array
    cout << "merged and sorted array : ";
    for (int i = 0; i < (sizea + sizeb); i++) {
        cout << merged_sorted[i] << " ";
    }
}