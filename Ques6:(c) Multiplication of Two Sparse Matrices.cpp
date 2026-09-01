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

    // Check multiplication condition
    if (A[0][1] != B[0][0]) {
        cout << "Multiplication not possible.";
        return 0;
    }

    int k = 1;

    C[0][0] = A[0][0];
    C[0][1] = B[0][1];

    // Multiply A and B
    for (int i = 0; i < A[0][0]; i++) {

        for (int j = 0; j < B[0][1]; j++) {

            int sum = 0;

            for (int x = 1; x <= A[0][2]; x++) {

                if (A[x][0] != i)
                    continue;

                for (int y = 1; y <= B[0][2]; y++) {

                    if (B[y][0] == A[x][1] &&
                        B[y][1] == j) {

                        sum += A[x][2] * B[y][2];
                    }
                }
            }

            if (sum != 0) {
                C[k][0] = i;
                C[k][1] = j;
                C[k][2] = sum;
                k++;
            }
        }
    }

    C[0][2] = k - 1;

    cout << "\nMultiplication of Sparse Matrices:\n";

    for (int i = 0; i <= C[0][2]; i++) {
        cout << C[i][0] << " "
             << C[i][1] << " "
             << C[i][2] << endl;
    }

    return 0;
}
