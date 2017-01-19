/*Time Calculator
Write a program that asks the user to enter a number of seconds.
• There are 60 seconds in a minute. If the number of seconds entered by the user is
greater than or equal to 60, the program should display the number of minutes in
that many seconds.
• There are 3,600 seconds in an hour. If the number of seconds entered by the user is
greater than or equal to 3,600, the program should display the number of hours in
that many seconds.
• There are 86,400 seconds in a day. If the number of seconds entered by the user is
greater than or equal to 86,400, the program should display the number of days in
that many seconds.*/
#include <iostream>


using namespace std;


int main() {

    float second, hour, day;
    hour = 3600;
    day = 86400;
    
    cout << "What are the seconds?" << endl;
    cin >> second;
   if(second >= 86400)
 cout << "there are : " << second/86400 << " days " << endl;
 
   else if(second >= 3600)
 
 cout << "there are : " << second/3600 << " hours " << endl;
 
 else if(second >= 60)
 
 cout << "there are : " << second/60 << " minutes" << endl;
 
else if(second < 60 && second > 0)
 
 cout << "there are : " << second << " seconds" << endl;
 
 else
 
 cout << "wrong, try again" << endl;
 
 
 
    
    
    
    
    
    return 0;
}

