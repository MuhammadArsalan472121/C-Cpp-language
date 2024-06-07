#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a, b, c;
    cout << "Enter the coefficients (a, b, and c) \n of the quadratic equation (ax^2 + bx + c): ";
    cin >> a >> b >> c;
    double discriminant = b * b - 4 * a * c;
    cout<<"Discriminant="<<discriminant<<"\n"<<endl;
    double root1, root2;
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and different." << endl;
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    } else if (discriminant == 0) {
        root1 = -b / (2 * a);
        cout << "Roots are real and same." << endl;
        cout << "Root 1 = Root 2 = " << root1 << endl;
    } else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "Roots are complex and different." << endl;
        cout << "Root 1 = " << realPart << " + " << imaginaryPart << " i" << endl;
        cout << "Root 2 = " << realPart << " - " << imaginaryPart << " i" << endl;
    }
    return 0;
}



