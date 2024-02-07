#include <iostream>
#include <vector>
using namespace std;

int firstOcc(int arr[], int s, int e, int key, int ans = -1) {
    
    // base-case
    if (s > e) 
        return ans;

    // processing
    int mid = s + (e - s) / 2;

    // recursive-relation
    if (arr[mid] == key) {
        ans = mid;
        firstOcc(arr, s, mid - 1, key, ans);
    }
    else if (arr[mid] > key) 
        firstOcc(arr, s, mid - 1, key, ans);
    else 
        firstOcc(arr, mid + 1, e, key, ans);
}

int lastOcc(int arr[], int s, int e, int key, int ans = -1) {
    
    // base-case
    if (s > e) 
        return ans;

    // processing
    int mid = s + (e - s) / 2;

    // recursive-relation
    if (arr[mid] == key) {
        ans = mid;
        lastOcc(arr, mid + 1, e, key, ans);
    }
    else if (arr[mid] > key) 
        lastOcc(arr, s, mid - 1, key, ans);
    else 
        lastOcc(arr, mid + 1, e, key, ans);
}

vector<int> occ(int arr[], int size, int key) {
    vector<int> ans;
    ans.push_back(firstOcc(arr, 0, size - 1, key));
    ans.push_back(lastOcc(arr, 0, size - 1, key));
    return ans;
}

int main() {
    
    // taking input
    int size;
    cout << "enter array size : ";
    cin >> size;
    int arr[100];
    cout << "enter array eleemnts : ";
    for (int i = 0; i < size; i++) 
        cin >> arr[i];
    int key;
    cout << "enter key : ";
    cin >> key;

    // first and last occurence of key in array
    vector<int> ans = occ(arr, size, key);

    // printing the result
    cout << "first occ : " << ans[0] << endl;
    cout << "last occ : " << ans[1] << endl;
    
    return 0;
    
}