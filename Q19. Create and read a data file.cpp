#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    // Create and write data to a file
    ofstream outFile("data.txt"); // Open file for writing
    if (!outFile) {
        cout << "Failed to open the file!" << endl;
        return 1;
    }
    // Write data to the file
    outFile << "Hello Sudaim, this is a data file." << endl;
    outFile << "This file contains Sudaim Name." << endl;
    // Close the file
    outFile.close();
    // Read data from the file
    ifstream inFile("data.txt"); // Open file for reading
    if (!inFile) {
        cout << "Failed to open the file!" << endl;
        return 1;
    }
    // Read and display data from the file
    string line;
    cout << "Contents of the file:\n" << endl;
    while (getline(inFile, line)) {
        cout << line << endl;
    }
    // Close the file
    inFile.close();
    return 0;
}


