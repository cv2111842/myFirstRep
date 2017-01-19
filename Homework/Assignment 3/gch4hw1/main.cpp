/*Minimum/Maximum
Write a program that asks the user to enter two numbers. The program should use the
conditional operator to determine which number is the smaller and which is the larger.*/
#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    float number1;
    float number2;
    
    cout << "Please enter two numbers" << endl;
    cin >> number1 >> number2; 
    
    if (number1 > number2)
        cout << number1 << " is greater than " << number2 << endl;
    else if (number1 < number2)
        cout << number2 << " is greater than " << number1 << endl;
    else 
        cout << "Wrong, try again" << endl;
    
    
    
    
    
    
    return 0;
}

