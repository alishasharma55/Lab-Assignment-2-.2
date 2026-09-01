#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of matrix: ";
    cin >> n;

    int lower[n * (n + 1) / 2];

    int k = 0;

    cout << "Enter lower triangular elements:\n";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cin >> lower[k++];
        }
    }

    k = 0;

    cout << "\nLower Triangular Matrix:\n";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i >= j)
                cout << lower[k++] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }

    return 0;
}
