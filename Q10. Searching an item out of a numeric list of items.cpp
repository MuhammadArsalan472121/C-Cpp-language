#include <iostream>
using namespace std;
int main() {
    const int maxSize = 100; // Maximum size of the array
    int numbers[maxSize]; // Array to store numeric items
    int size; // Size of the array
    int searchItem; // Item to search
        cout << "Enter the number of elements: ";
    cin >> size;// Input the size of the list
        cout << "Enter " << size << " numeric values:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> numbers[i];// Input the numeric values
    }
        cout << "Enter the item to search: ";
    cin >> searchItem;// Input the item to search
    bool found = false;    // Linear Search - searching the item in the list
    for (int i = 0; i < size; ++i) {
        if (numbers[i] == searchItem) {
            found = true;
            break;
        }
    }// Output the search result
        if (found) {
        cout << "Item " << searchItem << " found in the list." << endl;
    } else {
        cout << "Item " << searchItem << " not found in the list." << endl;
    }
    return 0;
}


