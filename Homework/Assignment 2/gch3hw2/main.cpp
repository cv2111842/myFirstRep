/*There are three seating categories at a stadium. For a softball game, Class A seats cost
$15, Class B seats cost $12, and Class C seats cost $9. Write a program that asks how
many tickets for each class of seats were sold, then displays the amount of income generated
from ticket sales. Format your dollar amount in fixed-point notation, with two
decimal places of precision, and be sure the decimal point is always displayed.*/
#include <iostream>
#include <iomanip>

using namespace std;


int main() {
    
    int classA;
    int classB;
    int classC;
    float income;
    
    
      
      cout << "How many tickets for Class A were sold?" << endl;
      cin >> classA;
      cout << "How many tickets for Class B were sold?" << endl;
      cin >> classB;
      cout << "How many tickets for Class C were sold?" << endl;
      cin >> classC;
      
      income = (classA*15)+(classB*12)+(classC*9);
      
      cout << "The amount of income generated from ticket sales is $" << setprecision (2) << fixed << showpoint << income << endl;
    
    

    return 0;
}

