#include <iostream>
using namespace std;

// time complexity O(n^2)

bool pairSum(int arr[], int n, int k) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == k) {
                cout << i << " " << j << endl;
                return true;
            }
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