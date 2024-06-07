#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    double sum = 0, num;
        for (int i = 0; i < n; i++) {
        cout << "Enter number " << i+1 << ": ";
        cin >> num;
        sum += num;
    }
        double average = sum / n;
    cout << "Average: " << average << endl;
    return 0;
}

