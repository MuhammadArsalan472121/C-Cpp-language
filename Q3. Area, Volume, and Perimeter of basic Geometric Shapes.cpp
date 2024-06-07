#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int choice; 
    char ch;
    again:	//this is flag or restarting point
    cout << "\n----------------------------\n\n";
    cout << "Select a geometric shape:\n";
    cout << "1. Rectangle\n";
    cout << "2. Circle\n";
    cout << "3. Square\n";
    cout << "4. Sphere\n";
    cout << "5. Cylinder\n";
    cout << "Enter your choice (1-5): ";
    cin >> choice;
    cout << "\n----------------------------\n\n";

    switch (choice) {
        case 1: {
            double length, width;
            cout << "Enter length and width of rectangle: ";
            cin >> length >> width;
            cout << "Area of rectangle: " << length * width << endl;
            cout << "Perimeter of rectangle: " << 2 * (length + width) << endl;
            cout<<"Want to Calculate again?(\"Y\" for yes \"N\" for No)"<<endl;
            cin>>ch;
            if (ch=='Y'||ch=='y')
            goto again;
            else
            break;
        }
        case 2: {
            double radius;
            cout << "Enter radius of circle: ";
            cin >> radius;
            cout << "Area of circle: " << M_PI * pow(radius, 2) << endl;
            cout<<"Want to Calculate again?(\"Y\" for yes \"N\" for No)"<<endl;
            cin>>ch;
            if (ch=='Y'||ch=='y')
            goto again;
            else
            break;
        }
        case 3: {
            double side;
            cout << "Enter side of square: ";
            cin >> side;
            cout << "Area of square: " << pow(side, 2) << endl;
            cout << "Perimeter of square: " << 4 * side << endl;
            cout<<"Want to Calculate again?(\"Y\" for yes \"N\" for No)"<<endl;
            cin>>ch;
            if (ch=='Y'||ch=='y')
            goto again;
            else
            break;
        }
        case 4: {
            double radius;
            cout << "Enter radius of sphere: ";
            cin >> radius;
            cout << "Volume of sphere: " << (4.0 / 3.0) * M_PI * pow(radius, 3) << endl;
            cout<<"Want to Calculate again?(\"Y\" for yes \"N\" for No)"<<endl;
            cin>>ch;
            if (ch=='Y'||ch=='y')
            goto again;
            else
            break;
        }
        case 5: {
            double radius, height;
            cout << "Enter radius and height of cylinder: ";
            cin >> radius >> height;
            cout << "Volume of cylinder: " << M_PI * pow(radius, 2) * height << endl;
            cout<<"Want to Calculate again?(\"Y\" for yes \"N\" for No)"<<endl;
            cin>>ch;
            if (ch=='Y'||ch=='y')
            goto again;
            else
            break;
        }
        default:
            cout << "Invalid choice!" << endl;
    }
    return 0;
}

