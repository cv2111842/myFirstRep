/*Mass and Weight
Scientists measure an object’s mass in kilograms and its weight in newtons. If you know
the amount of mass that an object has, you can calculate its weight, in newtons, with
the following formula:
Weight = mass * 9.8
Write a program that asks the user to enter an object’s mass, and then calculates and
displays its weight. If the object weighs more than 1,000 newtons, display a message
indicating that it is too heavy. If the object weighs less than 10 newtons, display a message
indicating that the object is too light.*/

#include <iostream>

using namespace std;


int main() {
    
    float mass;
    float weight;
    
    
    
    cout << "Enter the object's mass" << endl;
    cin >> mass;
    
    weight = mass * 9.8;
    
    if (weight >= 1000)
    {
        cout << "Too heavy" <<endl;
    }
    else if (weight <= 10)
    {
        cout << "Too light" << endl ;
    }
    
          
    
    
    
    
    
    
    
    
    

    return 0;
}

