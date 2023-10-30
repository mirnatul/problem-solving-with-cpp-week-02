#include <iostream>
using namespace std;

int main() {
    // int n;
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++) {
    //     cin >> arr[i];
    // }

    int n = 4;
    int arr[n] = {-1, 4, 7, 2};
    int sum = 0;
    int maxSum = INT32_MIN;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            for (int k = i; k <= j; k++) {
                cout << arr[k] << " ";
                sum += arr[k];
            }
            maxSum = max(maxSum, sum);
            sum = 0;
            cout << endl;
        }
    }
    cout << maxSum;

    return 0;
}