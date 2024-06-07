#include <iostream>
using namespace std;

int main() {
    double num, denum, percentage;
    
    cout << "Enter the num: ";
    cin >> num;
    
    cout << "Enter the denum: ";
    cin >> denum;
    
    percentage = (num / denum) * 100;
    
    cout << "Percentage: " << percentage << "%" << endl;
    
    return 0;
}

