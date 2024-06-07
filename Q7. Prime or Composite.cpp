#include <iostream>
using namespace std;
int main() {
    int num;
    bool primeFound = false; // To keep track if a divisor is found
    cout << "Enter a number: ";
    cin >> num;
    if (num <= 1) {
        cout << num << " is neither prime nor composite." << endl;
        return 0;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            primeFound = true;
            break;
        }
    }
    if (primeFound) {
        cout << num << " is a composite number." << endl;
    } else {
        cout << num << " is a prime number." << endl;
    }
    return 0;
}

