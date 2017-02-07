/*
 Falling Distance
When an object is falling because of gravity, the following formula can be used to
determine the distance the object falls in a specific time period:
d = 12gt2
The variables in the formula are as follows: d is the distance in meters, g is 9.8, and t
is the amount of time, in seconds, that the object has been falling.
Write a function named fallingDistance that accepts an object’s falling time (in
seconds) as an argument. The function should return the distance, in meters, that the
object has fallen during that time interval. Write a program that demonstrates the
function by calling it in a loop that passes the values 1 through 10 as arguments and
displays the return value.*/
#include <iostream>
#include <cmath>

using namespace std;


float fallingDistance(int t = 0);


int main() 
{

    int t = 0;
    float d = 0;
    
    cout << "This program will calculate the distance when the object falls " << endl;
    
    for (int i = 1; i <= 10; i++)
    {
        // receiving prototype 1
        d = fallingDistance (i); //prototype 1 repeats because it uses "i"
        cout << i << " second(s) " << d << " meters" << endl;
        //it is also reading d inside the prototype 1
        
    }
    
    
    
    
    return 0;
}

//prototype 1
float fallingDistance (int t) // turning t into a d 
{
    float d = 0;
    float g = 9.8;
    
    d = (0.5 * g) * (pow(t, 2));
    return d;
}
