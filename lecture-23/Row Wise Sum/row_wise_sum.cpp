#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector<int> row_wise_sum(int arr[][3]) {
    vector<int> ans;
    int sum = 0; 
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum += arr[i][j];
        }
        ans.push_back(sum);
        sum = 0;
    }
    return ans;
}

int largestSum (vector<int> rowSum) {
    int m = INT_MIN;
    for (int i = 0; i < rowSum.size(); i++) {
        if (m < rowSum[i]) {
            m = rowSum[i];
        }
    }
    return m;
}

int main() {

    // taking input
    int arr[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    // row wise sum
    vector<int> ans = row_wise_sum(arr);

    // printing the ans
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    cout << "largest sum : " << largestSum(ans) << endl;

    return 0;

}