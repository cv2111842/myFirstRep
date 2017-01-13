/*Miles per Gallon
Write a program that calculates a car’s gas mileage. The program should ask the user
to enter the number of gallons of gas the car can hold and the number of miles it can
be driven on a full tank. It should then display the number of miles that may be driven
per gallon of gas.*/

#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    
    
    float gallons; 
    float miles;
    float mpg;

    cout << "Please enter the number of gallons of the car can hold " << endl ;
    cin >> gallons;
    cout << "Please enter the number of miles it can be driven on a full tank. " << endl ;
    cin >> miles;
    mpg = miles / gallons;
    cout << "Your car drive " << mpg << " miles per gallon" << endl;
    
    
    
    
    
    
    return 0;
}

