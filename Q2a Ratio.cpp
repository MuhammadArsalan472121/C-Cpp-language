#include <iostream>
using namespace std;
int main() {
    float num1, num2;
    // Input the two numbers
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    // Check if the second number is not zero to avoid division by zero
    if (num2 != 0) {
        // Calculate the ratio
        float ratio = num1 / num2;
        // Output the result
        cout << "The ratio of " << num1 << " to " << num2 << " is: " << ratio << endl;
    } else { // Output error message if the second number is zero
        cout << "Error: Cannot divide by zero." << endl;
    }
    return 0;
}


