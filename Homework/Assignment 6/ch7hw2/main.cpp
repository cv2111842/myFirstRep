/*Rainfall Statistics
Write a program that lets the user enter the total rainfall for each of 12 months into
an array of double s. The program should calculate and display the total rainfall for
the year, the average monthly rainfall, and the months with the highest and lowest
amounts.
Input Validation: Do not accept negative numbers for monthly rainfall figures.*/

#include <iostream>

using namespace std;


int main() {
    
    float rainfall[12];
    float total = 0;
    float avg = 0;
    float low = 0;
    float high = 0;
    float temp = 0;
    
    
    // use this loop to ask the question 12 times 
    for (int i = 0; i < 12; i++)
    {   
        cout << "Enter the amount of rainfall in the month " << i + 1 << endl;
    cin >> rainfall[i];
   
    while (rainfall[i] < 0) //to make sure that the user does not input negative numbers
    {
        cout << "Try again" << endl;
        cin >> rainfall[i];
    }
    total = total + rainfall[i]; //this will hold and add every month rainfall until the loop stops
    
    }
    
    avg = total / 12;
    
    high = rainfall[0];
    low = rainfall[0]; 
    
    for (int i = 1; i <= 11; i++)
    {
     
        temp = rainfall[i];
        
        if (temp < low)
        {
            low = temp;
        }
        
        else if (temp > high)
            
            high = temp;
 }   
    cout << "The total of rainfall is " << total << endl;
    cout << "The average of the rainfall is " << avg << endl;
    cout << "The lowest rainfall in the month is " << low << endl;
    cout << "The highest rainfall in the month is " << high << endl;
            
    return 0;
}

