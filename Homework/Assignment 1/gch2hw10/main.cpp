/*Miles per Gallon
A car holds 15 gallons of gasoline and can travel 375 miles before refueling. Write a
program that calculates the number of miles per gallon the car gets. Display the result
on the screen.
Hint: Use the following formula to calculate miles per gallon (MPG):
MPG  Miles Driven/Gallons of Gas Used*/
#include <iostream>

using namespace std;

int main() {
    
    float gallons (15);
    float miles (375);
    float mpg;
    
    mpg = miles /gallons ;
    cout << "The car runs " << mpg << " miles per gallon" << endl;
    return 0;
}

