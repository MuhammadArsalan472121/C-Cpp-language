#include <iostream>
using namespace std;
// Function to find the day of the week using Zeller's Congruence algorithm
int findDayOfWeek(int day, int month, int year) {
    if (month < 3) {
        month += 12;
        year--;    }
    int q = day;
    int m = month;
    int K = year % 100;
    int J = year / 100;
    int dayOfWeek = (q + ((13*(m+1))/5) + K + (K/4) + (J/4) + 5*J) % 7; // Zeller's Congruence formula
    // Adjusting to have Sunday as 0,Monday as 1 ..., Saturday as 6
    dayOfWeek = (dayOfWeek + 6) % 7; // Adjusting the result
    return dayOfWeek;
}
int main() {
    int day, month, year;
	char check;
	again:
    cout << "Enter the day, month, and year (DD MM YYYY): ";
    cin >> day >> month >> year;    // Prompt user to enter the date
    // Call function to find the day of the week
    int dayOfWeek = findDayOfWeek(day, month, year);
    // Array to store day names
    string dayNames[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday","Saturday"};
    // Display the result
    cout << "The day " << day << "/" << month << "/" << year << " falls on a " << dayNames[dayOfWeek] << "." << endl;
	cout<<"\n------------\nPress Y to start Again:";
	cin>>check;
	if(check=='Y'||check=='y')
	goto again;
    return 0;
}

	
