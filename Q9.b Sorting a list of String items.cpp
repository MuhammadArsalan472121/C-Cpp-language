#include <iostream>
#include <string.h>
using namespace std;
int main() {
    const int maxSize = 100; // Maximum size of the array
    char strings[maxSize][100]; // Array to store strings, assuming maximum string length is 100
    int size; // Size of the array
       cout << "Enter the number of strings: ";
    cin >> size;     // Input the size of the list
    cout << "Enter " << size << " strings:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> strings[i]; // Input the strings
    }    // Bubble Sort - sorting the list of strings
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (strcmp(strings[j], strings[j + 1]) > 0) {  // Swap strings[j] and strings[j+1]
                char temp[100];
                strcpy(temp, strings[j]);
                strcpy(strings[j], strings[j + 1]);
                strcpy(strings[j + 1], temp);
            }
        }
    }    // Output the sorted list of strings
    cout << "Sorted list of strings:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << strings[i] << endl;
    }
    return 0;
}


