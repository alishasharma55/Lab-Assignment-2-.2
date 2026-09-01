#include <iostream>
using namespace std;

int main() {
    int A[100][3], B[100][3], C[100][3];

    cout << "Enter rows, columns and non-zero elements of Matrix A: ";
    cin >> A[0][0] >> A[0][1] >> A[0][2];

    cout << "Enter Matrix A triplets:\n";
    for (int i = 1; i <= A[0][2]; i++) {
        cin >> A[i][0] >> A[i][1] >> A[i][2];
    }

    cout << "Enter rows, columns and non-zero elements of Matrix B: ";
    cin >> B[0][0] >> B[0][1] >> B[0][2];

    cout << "Enter Matrix B triplets:\n";
    for (int i = 1; i <= B[0][2]; i++) {
        cin >> B[i][0] >> B[i][1] >> B[i][2];
    }

    // Check dimensions
    if (A[0][0] != B[0][0] || A[0][1] != B[0][1]) {
        cout << "Addition not possible.";
        return 0;
    }

    C[0][0] = A[0][0];
    C[0][1] = A[0][1];

    int i = 1, j = 1, k = 1;

    while (i <= A[0][2] && j <= B[0][2]) {

        if (A[i][0] == B[j][0] &&
            A[i][1] == B[j][1]) {

            int sum = A[i][2] + B[j][2];

            if (sum != 0) {
                C[k][0] = A[i][0];
                C[k][1] = A[i][1];
                C[k][2] = sum;
                k++;
            }

            i++;
            j++;
        }
        else if (A[i][0] < B[j][0] ||
                (A[i][0] == B[j][0] &&
                 A[i][1] < B[j][1])) {

            C[k][0] = A[i][0];
            C[k][1] = A[i][1];
            C[k][2] = A[i][2];

            i++;
            k++;
        }
        else {
            C[k][0] = B[j][0];
            C[k][1] = B[j][1];
            C[k][2] = B[j][2];

            j++;
            k++;
        }
    }

    // Remaining elements of A
    while (i <= A[0][2]) {
        C[k][0] = A[i][0];
        C[k][1] = A[i][1];
        C[k][2] = A[i][2];

        i++;
        k++;
    }

    // Remaining elements of B
    while (j <= B[0][2]) {
        C[k][0] = B[j][0];
        C[k][1] = B[j][1];
        C[k][2] = B[j][2];

        j++;
        k++;
    }

    C[0][2] = k - 1;

    cout << "\nAddition of Sparse Matrices:\n";

    for (int x = 0; x <= C[0][2]; x++) {
        cout << C[x][0] << " "
             << C[x][1] << " "
             << C[x][2] << endl;
    }

    return 0;
}
