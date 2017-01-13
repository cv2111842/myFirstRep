/*Average Rainfall
Write a program that calculates the average rainfall for three months. The program
should ask the user to enter the name of each month, such as June or July, and the
amount of rain (in inches) that fell each month. The program should display a message
similar to the following:
The average rainfall for June, July, and August is 6.72 inches.*/
#include <iostream>
#include <string>

using namespace std;

/*
 * 
 */
int main() {
    
    string month1;
    string month2;
    string month3;
    
    float rain1;
    float rain2;
    float rain3;
    
    float average;
    
    cout << "Enter the name of month of rain." << endl;
    cin >> month1;
    cout << "Enter the amount of rain in inches that fell in " <<month1<< endl;
    cin >> rain1;
    cout << "Enter the name of the second month of rain." << endl;
    cin >> month2;
    cout << "Enter the amount of rain in inches that fell in " <<month2<< endl;
    cin >> rain2;
    cout << "Enter the name of the third month of rain." << endl;
    cin >> month3;
    cout << "Enter the amount of rain in inches that fell in " <<month3<< endl;
cin >> rain3;
average = (rain1+rain2+rain3)/3;

cout << "The average rainfall for " << month1 << " "<< month2 << " and " <<month3<< " is "<<average<< " inches." << endl;
    return 0;
}

