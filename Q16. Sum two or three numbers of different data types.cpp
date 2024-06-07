#include <iostream>
using namespace std;
int main() {
    // Declare variables of different data types
    int num1 = 10;
    double num2 = 20.5;
    float num3 = 15.7;
    // Sum of two numbers
    double sum1 = num1 + num2;//implicit typecasting
    cout << "Sum of int and double: " << sum1 << endl;
    // Sum of three numbers
    double sum2 = (double)(num1 + num2 + num3);//explicit typecasting
    cout << "Sum of int, double, and float: " << sum2 << endl;
    return 0;
}

