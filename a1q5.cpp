#include <iostream>

using namespace std;

int main() {
    const int rows = 3;
    const int cols = 4;

    int matrix[rows][cols] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    cout << "Calculating row sums:" << endl;
    for (int i = 0; i < rows; ++i) {
        int rsum = 0;
        for (int j = 0; j < cols; ++j) {
            rsum += matrix[i][j];
        }
        cout << "Sum of row " << i << ": " << rsum << endl;
    }

    cout << endl;

    cout << "Calculating column sums:" << endl;
    for (int j = 0; j < cols; ++j) {
        int csum = 0;
        for (int i = 0; i < rows; ++i) {
            csum += matrix[i][j];
        }
        cout << "Sum of column " << j << ": " << csum << endl;
    }

    return 0;
}