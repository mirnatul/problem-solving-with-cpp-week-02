#include <iostream>
using namespace std;

int main() {
    int n = 6;
    int arr[n] = {-1, 4, -6, 7, -4, 10};
    int sum = 0;

    int maxSum = INT32_MIN;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
        // cout << sum << " ";
        if (sum < 0) {
            sum = 0;
        }
        maxSum = max(maxSum, sum);
    }
    cout << maxSum;

    return 0;
}