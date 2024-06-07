#include <iostream>
using namespace std;
int main() {
    const int maxRows = 3;
    const int maxCols = 3;
    int matrix1[maxRows][maxCols];
    int matrix2[maxRows][maxCols];
    int result[maxRows][maxCols];
    int rows, cols;
    // Input the number of rows and columns for matrices
    cout << "Enter the number of rows & cols(max 3): ";
    cin >> rows >> cols;
    // Input elements for matrix 1
    cout << "Enter elements for matrix 1:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter element [" << i  << "][" << j  << "]: ";
            cin >> matrix1[i][j];
        }
    }
    // Input elements for matrix 2
    cout << "Enter elements for matrix 2:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter element [" << i  << "][" << j  << "]: ";
            cin >> matrix2[i][j];
        }
    }
    // Adding the matrices
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    // Displaying the result matrix
    cout << "Resultant matrix after addition:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}


