#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>
using namespace std;
// Define the Student class
class Student {
private:  //Access specifiers
    string name;
    int age;
    string className;
public:   //Access specifiers
    // Constructor to initialize the data members
    Student(string n, int a, string c) {
        name = n;
        age = a;
        className = c;
    }
    // Function to display student information
    void displayInfo() {
        cout << "Name:\t"<<setw(10) << name << endl;
        cout << "Age:\t"<<setw(10) << age  << endl;
        cout << "Class:\t"<<setw(10)<< className << endl;
    }
};
int main() {
    // Create a student object and initialize its data members
    Student student1("Saad", 16, "12th");
    Student student2("Majid", 18, "12th");
    
    // Display student information
    cout << "Student Information:" << endl;

    student1.displayInfo();
	getch();
    student2.displayInfo();	
    return 0;
}


