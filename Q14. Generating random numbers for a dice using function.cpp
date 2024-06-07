#include <iostream>
#include <cstdlib> // c standard Library
#include <ctime>
using namespace std;
// Function to simulate rolling a dice and return the result
int rollDice() {
    return rand() % 7 + 1; // Generating a random number between 1 and 6
}
int main() {
    // Seed the random number generator
    srand(time(NULL));
    char choice;
    // Rolling the dice until the user decides to stop
    do {
        cout << "You rolled: " << rollDice() << endl;
        cout << "Roll again? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    return 0;
}


