#include <iostream>
using namespace std;
int main() {
    int maxSize = 100;		// Define the maximum size for the array
    int numbers[maxSize];	// Declare an array to store numeric values
    int size;				// Input the size of the list
    cout << "Enter the number of elements: ";
    cin >> size;
    // Input the numeric values
    cout << "Enter " << size << " numeric values:" << endl;
    for (int i = 0; i < size; ++i) {
cin>>numbers[i];
    }    // Bubble Sort - sorting the list of numeric values
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (numbers[j] > numbers[j + 1]) { // Swap numbers[j] and numbers[j+1]
                int temp = numbers[j];		//temp = a;
                numbers[j] = numbers[j + 1];//a = b;
                numbers[j + 1] = temp;		//b=temp
            }
        }
    }    // Output the sorted list
    cout << "Sorted list:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    return 0;
}


