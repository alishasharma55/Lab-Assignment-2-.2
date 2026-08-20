#include <iostream>
using namespace std;

int missingLinear(int arr[], int n) {
    int expected = n * (n + 1) / 2;
    int actual = 0;

    for (int i = 0; i < n - 1; i++) {
        actual += arr[i];
    }

    return expected - actual;
}

int missingBinary(int arr[], int n) {
    int low = 0, high = n - 2;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == mid + 1)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return low + 1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 6, 7, 8};
    int n = 8;

    cout << "Missing number using Linear Search: "
         << missingLinear(arr, n) << endl;

    cout << "Missing number using Binary Search: "
         << missingBinary(arr, n) << endl;

    return 0;
}
