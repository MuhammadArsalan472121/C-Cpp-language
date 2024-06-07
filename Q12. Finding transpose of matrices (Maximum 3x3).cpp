#include <iostream>
using namespace std;
int main() {
    const int maxRows = 3;
    const int maxCols = 3;
    int matrix[maxRows][maxCols];
    int transpose[maxRows][maxCols];
    int rows, cols;
    // Input the number of rows and columns for the matrix
    cout << "Enter the number of rows & cols(max 3): ";
    cin >> rows >> cols;
    // Input elements for the matrix
    cout << "Enter elements for the matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }   //Current Matrix
    cout << "Current matrix:" << endl;
    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }    // Finding the transpose of the matrix
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            transpose[j][i] = matrix[i][j];
        }
    }    // Displaying the transpose matrix
    cout << "Transpose of the matrix:" << endl;
    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}


