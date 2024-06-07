#include <iostream>
#include <conio.h>

using namespace std;
int main() {
    // Declare a variable
    int num = 10;
    // Declare a pointer and assign the address of the variable to it
    int *ptr = &num;
    // Display the address of the variable
    cout << "Address of the variable num: " << ptr << endl;
    getch();
    // Display the value of the variable using the pointer
    cout << "Value of the variable num: " << *ptr << endl;
    return 0;
}
	
