/*
 Celsius Temperature Table
The formula for converting a temperature from Fahrenheit to Celsius is
C =5/9 (F - 32)
where F is the Fahrenheit temperature and C is the Celsius temperature. Write a function
named celsius that accepts a Fahrenheit temperature as an argument. The function
should return the temperature, converted to Celsius. Demonstrate the function by
calling it in a loop that displays a table of the Fahrenheit temperatures 0 through 20
and their Celsius equivalents.*/

#include <iostream>
#include <iomanip>

using namespace std;


float celsius (float f);

int main() {
    
    
    float c = 0;
    
    
    cout << "This program will show the temperatures..." << endl;
    
    for (int i = 0; i <= 20; i++)
    {
        
        c = celsius(i);
        cout << setprecision(2)<< fixed << showpoint << endl;
        cout << i << " in Fahrenheit is equal to " << c << " Celsius" << endl;
        
    }

    
    
    
    
    return 0;
}

float celsius (float f){
    
    float c = 0.0;
    c = (5.0/9.0) * (f - 32);
    return c;

}