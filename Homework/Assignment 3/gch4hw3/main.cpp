/*Magic Dates
The date June 10, 1960 is special because when we write it in the following format, the
month times the day equals the year.
6/10/60
Write a program that asks the user to enter a month (in numeric form), a day, and a
two-digit year. The program should then determine whether the month times the day is
equal to the year. If so, it should display a message saying the date is magic. Otherwise
it should display a message saying the date is not magic.*/

#include <iostream>

using namespace std;

int main() {
    
    int day;
    int month;
    int year;

cout << "Enter the day" << endl;
cin >> day;
cout << "Enter the month" << endl;
cin >> month;
cout << "Enter the year" << endl;
cin >> year;

if (day * month == year)
    cout << "The date is magic" << endl;
else
    cout << "The date is not magic" << endl;

    return 0;
}

