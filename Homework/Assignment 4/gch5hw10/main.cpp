/*Average Rainfall
Write a program that uses nested loops to collect data and calculate the average rainfall
over a period of years. The program should first ask for the number of years. The outer
loop will iterate once for each year. The inner loop will iterate twelve times, once for
each month. Each iteration of the inner loop will ask the user for the inches of rainfall
for that month.
After all iterations, the program should display the number of months, the total inches
of rainfall, and the average rainfall per month for the entire period.
Input Validation: Do not accept a number less than 1*/

#include <iostream>
#include <iomanip>

using namespace std;


int main() {
    
    int years = 0;
    float inches;
    float MONTH = 12;
    float aTotal = 0.0;
    float aInches = 0.0;
    
    cout << "enter the amount of years" << endl;
    cin >> years;
    while (years < 1)
    {
        cout << "try again" << endl;
    
    cout << "enter the amount of years" << endl;
    cin >> years;
    }
    for (int i = 1; i  <= years; i++)
    {
        for (int months = 1; months <= MONTH; months++)
        {
            cout << "enter the rainfall for month " << months << endl;
            cin >> inches;
            while (inches < 0)
            {
                cout << "wrong, try again" << endl;
                cout << "enter the rainfall for month " << months << endl;
                cin >> inches;
            }
            aInches = aInches + inches;
        }
        
    }
    cout << setprecision(2)<< fixed<< endl;
    cout << "Months: " << years * MONTH << endl ;
    cout << "The total of rainfall is " << aInches << endl;
    cout << "average " << aInches / (years * MONTH)<<endl;
    
    
    
    return 0;
}

