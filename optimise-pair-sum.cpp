#include <iostream>
using namespace std;

// time complexity O(n)

bool pairSum(int arr[], int n, int k) {
    int low = 0;
    int high = n - 1;

    while (low < high) {
        if (arr[low] + arr[high] < k) {
            low++;
        } else if (arr[low] + arr[high] > k) {
            high--;
        } else {
            cout << low << " " << high << endl;
            return true;
        }
    }
    return false;
}

int main() {
    int n = 8;
    int arr[n] = {2, 4, 7, 11, 14, 16, 20, 21};
    cout << pairSum(arr, n, 31);
    return 0;
}