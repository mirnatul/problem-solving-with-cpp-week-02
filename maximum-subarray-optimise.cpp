#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int currentSum[n + 1];
    currentSum[0] = 0;

    for (int i = 1; i <= n; i++) {
        currentSum[i] = currentSum[i - 1] + arr[i - 1];
    }

    int maxSum = INT32_MIN;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < i; j++) {
            sum = currentSum[i] - currentSum[j];
            maxSum = max(sum, maxSum);
        }
    }

    cout << maxSum;

    return 0;
}