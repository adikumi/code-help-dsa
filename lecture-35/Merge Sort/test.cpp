void merge(vector<int> &arr, int s, int e, int mid) {
    int len1 = mid - s + 1;
    int len2 = e - mid;
    vector<int> arr1;
    vector<int> arr2;
    cout << s << " " << mid << " " << e << endl;
    // populating arr1 and arr2
    for (int i = 0; i <= mid; i++) {
        arr1.push_back(arr[s + i]);
        // cout << arr[i] << " ";
    }
    // cout << endl;
    
    for (int i = mid + 1; i <= e; i++) {
        arr2.push_back(arr[i]);
        // cout << arr[i] << " ";
    }
    // cout << endl;

    printVector(arr1);
    printVector(arr2);
    
    // merging sorted arrays
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
    // for (int i = s; i <= e; i++) {
    //   cout << arr[i] << " ";
    // }
    // cout << endl;
}