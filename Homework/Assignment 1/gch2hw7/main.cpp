/*Assuming the ocean’s level is currently rising at about 1.5 millimeters per year, write
a program that displays:
• The number of millimeters higher than the current level that the ocean’s level will be
in 5 years
• The number of millimeters higher than the current level that the ocean’s level will be
in 7 years
• The number of millimeters higher than the current level that the ocean’s level will be
in 10 years */
#include <iostream>

using namespace std;

int main (){
    
    
    float current (1.5);
    
    cout << "The ocean level in five years will be " << current*5 << " millimeters higher than the current level." << endl;
    cout << "The ocean level in seven years will be " << current*7 << " millimeters higher than the current level." << endl;
    cout << "The ocean level in ten years will be " << current*10 << " millimeters higher than the current level." << endl;
    
    
    return 0;
    
    
    
    
    
}