#include <iostream>
using namespace std;
int main() {
    const int maxRows = 3;
    const int maxCols = 3;
    int matrix1[maxRows][maxCols];
    int matrix2[maxRows][maxCols];
    int result[maxRows][maxCols];
    int rows1, cols1, rows2, cols2;
    // Input the number of rows and columns for the first matrix
    cout << "Enter the number of rows &\ncols for matrix 1 (max 3): ";
    cin >> rows1 >> cols1;
    cout << "Enter elements for matrix 1:" << endl;
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols1; ++j) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix1[i][j];  }    }    // Input elements for matrix 1
    // Input the number of rows and columns for the second matrix
    cout << "Enter the number of rows &\ncols for matrix 2 (max 3): ";
    cin >> rows2 >> cols2;
    // Input elements for matrix 2
    cout << "Enter elements for matrix 2:" << endl;
    for (int i = 0; i < rows2; ++i) {
        for (int j = 0; j < cols2; ++j) {
            cout << "Enter element [" << i << "][" << j  << "]: ";
            cin >> matrix2[i][j];  }    }
    // Multiplying the matrices
    if (cols1 == rows2) {
        for (int i = 0; i < rows1; ++i) {
            for (int j = 0; j < cols2; ++j) {
                result[i][j] = 0;
                for (int k = 0; k < cols1; ++k) {
                    result[i][j] += matrix1[i][k] * matrix2[k][j];  }  }  }
        // Displaying the result matrix
        cout << "Resultant matrix after multiplication:" << endl;
        for (int i = 0; i < rows1; ++i) {
            for (int j = 0; j < cols2; ++j) {
                cout << result[i][j] << " ";}
            cout << endl; }
    } else {
        cout << "Error: No of columns in matrix 1 are not equal to No of rows in matrix 2." << endl; }
    return 0;	}


