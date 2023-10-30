#include <climits>
#include <iostream>
using namespace std;

int kadane(int arr[], int n) {
    int currentSum = 0;
    int maxSum = INT32_MIN;
    for (int i = 0; i < n; i++) {
        currentSum += arr[i];
        if (currentSum < 0) {
            currentSum = 0;
        }
        maxSum = max(maxSum, currentSum);
    }
    return maxSum;
}

int main() {
    int n = 7;
    int arr[n] = {4, -4, 6, -6, 10, -11, 12};

    int wrapSum;
    int nonWrapSum;

    nonWrapSum = kadane(arr, n);

    int totalSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
        arr[i] = -arr[i];
    }

    wrapSum = totalSum + kadane(arr, n);  // here the array is reversed signed array and - * - = +

    cout << max(wrapSum, nonWrapSum);

    return 0;
}