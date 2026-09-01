#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of matrix: ";
    cin >> n;

    int upper[n * (n + 1) / 2];

    int k = 0;

    cout << "Enter upper triangular elements:\n";

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            cin >> upper[k++];
        }
    }

    k = 0;

    cout << "\nUpper Triangular Matrix:\n";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i <= j)
                cout << upper[k++] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }

    return 0;
}
