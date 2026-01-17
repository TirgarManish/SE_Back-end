/*Matrix Addition
o Write a C++ program to perform matrix addition on two 2x2 matrices.
o Objective: Practice multi-dimensional arrays.
*/

#include <iostream>
using namespace std;

int main() {
    int A[2][2], B[2][2], sum[2][2];

    // Input matrix A
    cout << "Enter elements of Matrix A (2x2):\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "A[" << i << "][" << j << "] = ";
            cin >> A[i][j];
        }
    }

    // Input matrix B
    cout << "\nEnter elements of Matrix B (2x2):\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "B[" << i << "][" << j << "] = ";
            cin >> B[i][j];
        }
    }

    // Matrix addition
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }

    // Display result
    cout << "\nResultant Matrix (A + B):\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

