/*Kinetic Energy
In physics, an object that is in motion is said to have kinetic energy. The following
formula can be used to determine a moving object’s kinetic energy:
KE  12 mv2
The variables in the formula are as follows: KE is the kinetic energy, m is the object’s
mass in kilograms, and v is the object’s velocity, in meters per second.
Write a function named kineticEnergy that accepts an object’s mass (in kilograms)
and velocity (in meters per second) as arguments. The function should return the
amount of kinetic energy that the object has. Demonstrate the function by calling it in
a program that asks the user to enter values for mass and velocity.*/

#include <iostream>
#include <cmath>

using namespace std;


//prototype 1
float kineticEnergy (int m, int v);



// main always drag the prototypes 
int main() {
    
    float ke = 0;
    
    int m = 0;
    int v = 0;
    
    cout << "Enter the mass in kilograms" << endl;
    cin >> m;
    cout << "Enter the velocity in meters per second" << endl;
    cin >> v;
    
    ke = kineticEnergy (m, v); //contains prototype 1
    cout << "Kinetic energy of the object is " << ke << endl;
    
    
    
    return 0;
}

//prototype 1
float kineticEnergy (int m, int v)
{
    
  
    
            return (0.5 * m ) * (pow(v,2));
    
}
