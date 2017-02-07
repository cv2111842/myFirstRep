/*Largest/Smallest Array Values
Write a program that lets the user enter 10 values into an array. The program should
then display the largest and smallest values stored in the array.*/

#include <iostream>

using namespace std;


int main() {
    
    int number [10];
    int small = 0;
    int large = 0;
    int temp = 0;
    
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter a number " << i + 1 << endl;
        cin >> number[i];
    }
    
    small = number[0];
    large = number[0];

    
    for (int i = 1; i <= 9; i++)
    {    
        temp = number[i];
    
        if (temp < small)
    {
         small = temp;
    }
       
    
    else if (temp > large)
    {
        large = temp;
    }
        
    }
    
    
    cout << "The smallest number is " << small << endl;
   
    cout << "The largest number is " << large << endl;
    
    
        
        
    return 0;
}

