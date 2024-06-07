//Q8: Generating and summing simple series?
//i.	3 6 9 12 ....99 
//ii.	2 4 6 8 ....100 
//iii.	Fibonacci series up to a specified number of terms 
//1 1 2 3 5 8 13 21
#include <iostream>
using namespace std;
int main() {
    int choice,sum = 0;
    cout << "Choose the series to sum:\n";
    cout << "1. 3 6 9 12 ....99\n";
    cout << "2. 2 4 6 8 ....100\n";
    cout << "3. Fibonacci series upto a specified number of terms\n";
    cout << "Enter your choice (1, 2, or 3): ";
    cin >> choice;
    switch (choice) {
        case 1: {
            for (int i = 3; i <= 99; i += 3) {
                sum += i;//sum=sum+i
            }
            break;
        }
        case 2: {
            for (int i = 2; i <= 100; i += 2) {
                sum += i;
            }
            break;
        }
        case 3: {
            int numTerms;
            cout << "Enter the number of terms for the Fibonacci series: ";
            cin >> numTerms;
            int prev = 1, curr = 1;
            sum = prev+curr; // Sum starts with 1 + 1 (first two terms of Fibonacci series)
            cout<<"Fibonacci Series: "<<prev<<" "<<curr<<" ";
			for (int i = 3; i <= numTerms; ++i) {
                int next = prev + curr;
                sum += next;
                prev = curr;
                curr = next;
                cout<<next<<" ";
            }
            break;
        }
        default:
            cout << "Invalid choice!" << endl;
            return 1; // Exit with error status
    }
    cout << "\nSum of the series: " << sum << endl;
    return 0;
}

