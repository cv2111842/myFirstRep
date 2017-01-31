/*Pennies for Pay
Write a program that calculates how much a person would earn over a period of time
if his or her salary is one penny the first day and two pennies the second day, and continues
to double each day. The program should ask the user for the number of days.
Display a table showing how much the salary was for each day, and then show the
total pay at the end of the period. The output should be displayed in a dollar amount,
not the number of pennies.
Input Validation: Do not accept a number less than 1 for the number of days worked.*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    int days;
    float total = 0 ;
    float money = 1;
    float check;
    float m;
    
    
    
    cout << "How many days have you worked?" << endl;
    cin >> days;
    
    while (days <= 0)
    {   
        cout << "try again" << endl;
    
    cout << "How many days have you worked?" << endl;
    cin >> days;
    }
   
    
    for (int i = 1; i <= days; i++)
    {   
        
        m = money / 100;
                
      cout << setprecision (2)<< fixed << showpoint  << endl;
    cout << "Day " << i << " the check is $" << m << endl;
   
    total = total + m;
   
    money = money * 2;
   
    }
   
    
    cout << "the total is $" << total << endl;
    
    
    
    return 0;
}

