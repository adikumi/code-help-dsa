#include <iostream>
using namespace std;

linear_search(int arr[][3], int size, int key) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (arr[i][j] == key) {
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    int arr[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }
    int key;
    cin >> key;

    cout << linear_search(arr, 3, key);
}