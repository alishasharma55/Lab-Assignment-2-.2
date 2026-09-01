#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int A[100];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int count = 0;

    // Check every pair
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {

            if (A[i] > A[j]) {
                count++;
            }
        }
    }

    cout << "Number of inversions = " << count << endl;

    return 0;
}
