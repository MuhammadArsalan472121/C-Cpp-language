#include <iostream>
using namespace std;
int main() {
    const int maxSize = 100; // Maximum size of the string
    char inputString[maxSize]; // Array to store the input string
    char reversedString[maxSize]; // Array to store the reversed string
    cout << "Enter a string: ";// Input the string
    cin >> inputString;
    // Find the length of the string
    int length = 0;
    while (inputString[length] != '\0') {
        ++length;    }    // Reverse the string
    for (int i = 0; i < length; ++i) {
        reversedString[i] = inputString[length - i - 1];    }
    reversedString[length] = '\0'; // Null-terminate the reversed string
    cout << "Reversed string: " << reversedString << endl;
    return 0;
}


