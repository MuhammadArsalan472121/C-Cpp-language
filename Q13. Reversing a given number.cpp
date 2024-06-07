#include <iostream>
using namespace std;
int main() {
    int number, reversedNumber = 0;
    // Input the number
    cout << "Enter a number: ";
    cin >> number;
    // Reverse the number
    while (number != 0) {
        reversedNumber = reversedNumber * 10 + (number % 10);
      //  cout<<reversedNumber<<endl;
		number /= 10;
      //  cout<<number<<endl;
       // cout<<reversedNumber<<endl;
    }
    // Output the reversed number
    cout << "Reversed number: " << reversedNumber << endl;
    return 0;
}


