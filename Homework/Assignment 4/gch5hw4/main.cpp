/*Calories Burned
Running on a particular treadmill you burn 3.6 calories per minute. Write a program that
uses a loop to display the number of calories burned after 5, 10, 15, 20, 25, and 30 minutes.*/

#include <iostream>

using namespace std;


int main() {
    
   
    float minute; 
    float calories;
    float burn = 3.6;
   
    
    for (minute = 5; minute <= 30; minute += 5)
    {    
        calories = (minute * burn);
        
        cout << " You will burn " << calories << " calories after " << minute << " minutes." << endl;
    
    }
    

    return 0;
}

