#include <iostream>
using namespace std;
int main() {
    int choice;
    cout << "Choose an option:\n";
    cout << "1. Compare two numbers\n";
    cout << "2. Compare three numbers\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;
    if (choice == 1) {
        // Comparing 2 numbers
        double num1, num2;
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        if (num1 == num2)
            cout << "Both numbers are equal." << endl;
        else if (num1 > num2)
            cout << "First number is greater than the second number." << endl;
        else
            cout << "Second number is greater than the first number." << endl;
    }
    else if (choice == 2) {
        // Comparing 3 numbers
        double num1, num2, num3;
        cout << "Enter three numbers: ";
        cin >> num1 >> num2 >> num3;
        if (num1 == num2 && num2 == num3)
            cout << "All three numbers are equal." << endl;
        else if (num1 >= num2 && num1 >= num3)
            cout << "First number is the greatest among the three." << endl;
        else if (num2 >= num1 && num2 >= num3)
            cout << "Second number is the greatest among the three." << endl;
        else
            cout << "Third number is the greatest among the three." << endl;
    }
    else {
        cout << "Invalid choice!" << endl;
    }
    return 0;
}


