#include <iostream>
using namespace std;

int main() {
    int sparse[100][3], transpose[100][3];

    cout << "Enter number of rows, columns and non-zero elements: ";
    cin >> sparse[0][0] >> sparse[0][1] >> sparse[0][2];

    cout << "Enter triplet elements (row column value):\n";

    for (int i = 1; i <= sparse[0][2]; i++) {
        cin >> sparse[i][0] >> sparse[i][1] >> sparse[i][2];
    }

    // Header of transpose
    transpose[0][0] = sparse[0][1];
    transpose[0][1] = sparse[0][0];
    transpose[0][2] = sparse[0][2];

    int k = 1;

    // Convert rows into columns
    for (int col = 0; col < sparse[0][1]; col++) {
        for (int i = 1; i <= sparse[0][2]; i++) {
            if (sparse[i][1] == col) {
                transpose[k][0] = sparse[i][1];
                transpose[k][1] = sparse[i][0];
                transpose[k][2] = sparse[i][2];
                k++;
            }
        }
    }

    cout << "\nTranspose of Sparse Matrix:\n";
    for (int i = 0; i <= transpose[0][2]; i++) {
        cout << transpose[i][0] << " "
             << transpose[i][1] << " "
             << transpose[i][2] << endl;
    }

    return 0;
}
