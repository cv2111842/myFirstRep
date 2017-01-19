/*Roman Numeral Converter
Write a program that asks the user to enter a number within the range of 1 through
10. Use a switch statement to display the Roman numeral version of that number.
Input Validation: Do not accept a number less than 1 or greater than 10.*/
#include <iostream>

using namespace std;


int main() {
    
    int number;
    
    cout << "Enter a number from 1 to 10: " << endl;
    cin >> number;

 if(number < 1 || number > 10)
    cout << "Wrong, try again" << endl;
 else
 switch(number)
 {
     
     
         case 1:
            cout << "The Roman numeral converts your number into I " << endl;
            break;
         case 2:
             cout << "The Roman numeral converts your number into II " << endl;
             break;
         case 3:
            cout << "The Roman numeral converts your number into III " << endl;
            break;
         case 4:
             cout << "The Roman numeral converts your number into IV " << endl;
             break;
         case 5:
            cout << "The Roman numeral converts your number into V " << endl;
            break;
         case 6:
             cout << "The Roman numeral converts your number into VI " << endl;
             break;
          case 7:
            cout << "The Roman numeral converts your number into VII " << endl;
            break;
         case 8:
             cout << "The Roman numeral converts your number into VIII " << endl;
             break;
          case 9:
            cout << "The Roman numeral converts your number into IX " << endl;
            break;
         case 10:
             cout << "The Roman numeral converts your number into X " << endl;
             break;
     }
             
    

   
}

