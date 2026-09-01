#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of matrix: ";
    cin >> n;

    int symmetric[n * (n + 1) / 2];

    int k = 0;

    cout << "Enter lower triangular elements:\n";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cin >> symmetric[k++];
        }
    }

    cout << "\nSymmetric Matrix:\n";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            if (i >= j)
                cout << symmetric[i * (i + 1) / 2 + j] << " ";
            else
                cout << symmetric[j * (j + 1) / 2 + i] << " ";
        }

        cout << endl;
    }

    return 0;
}
