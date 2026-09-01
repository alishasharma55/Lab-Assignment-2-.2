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

    int distinct = 0;

    for (int i = 0; i < n; i++) {
        bool isDistinct = true;

        // Check whether the element appeared before
        for (int j = 0; j < i; j++) {
            if (A[i] == A[j]) {
                isDistinct = false;
                break;
            }
        }

        if (isDistinct) {
            distinct++;
        }
    }

    cout << "Total number of distinct elements = " << distinct << endl;

    return 0;
}
