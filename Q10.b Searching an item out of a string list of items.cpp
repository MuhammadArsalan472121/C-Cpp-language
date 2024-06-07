#include <iostream>
using namespace std;
int main() {
    const int maxSize = 100; // Maximum size of the array
    char strings[maxSize][100]; // Array to store string items, length is 100
    int size; // Size of the array
    char searchItem[100]; // Item to search
    cout << "Enter the number of elements: ";
    cin >> size;// Input the size of the list
    cout << "Enter " << size << " string values:" << endl;
    for (int i = 0; i < size; ++i){
        cin >> strings[i];	}// Input the string values
        cout << "Enter the item to search: ";
    cin >> searchItem;// Input the item to search
    bool found = false;// Linear Search - searching the item in the list
    for (int i = 0; i < size; ++i) {
        bool match = true;
        for (int j = 0; strings[i][j] != '\0' || searchItem[j] != '\0'; ++j) {
            if (strings[i][j] != searchItem[j]) {
                match = false;
                break;  }	}
        if (match) {
            found = true;
            break;	}	}
    if (found) { // Output the search result
        cout << "Item " << searchItem << " found in the list." << endl;
    } else {
        cout << "Item " << searchItem << " not found in the list." << endl; }
    return 0;	}


