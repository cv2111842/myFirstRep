/*The Greatest and Least of These
Write a program with a loop that lets the user enter a series of integers. The user should
enter −99 to signal the end of the series. After all the numbers have been entered, the
program should display the largest and smallest numbers entered.*/

#include <iostream>

using namespace std;


int main() {

    int number = 0;
    int high;
    int low;
    int counter = 0;
    
    
    
    while (number != -99 )
    {    
        cout << "Enter a number, enter -99 to finalize" << endl;
        cin >> number;
        
        if (counter == 0 )
          {  
            high = number;
             low = number;
        }
        
        else 
        {
            if (number > high && number != -99)
                high = number;
            else if (number <low && number != -99)
                low = number;
            
        }
        counter++;
    }
    cout << "the highest number is " << high << endl;
    cout << "the lowest number is " << low << endl;
    
    
    
    
    return 0;
}

