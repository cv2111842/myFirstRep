
/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 17, 2017, 12:10 PM
  Purpose:  Example Menu to be used in Homework
 */

//System Libraries
#include <iostream>//Input Output Library
#include <cstdlib> //Random number generator seed
#include <ctime>   //Time Library
#include <iomanip> //Format Library
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    
    //Loop on the menu
    do{
    
        //Input values
        cout<<"Choose from the list"<<endl;
        cout<<"Type 1 for Problem: Sum of Numbers"<<endl;
        cout<<"Type 2 for Problem: Characters for the ASCII Codes"<<endl;
        cout<<"Type 3 for Problem: Ocean Levels"<<endl;
        cout<<"Type 4 for Problem: Calories Burned"<<endl;
        cout<<"Type 5 for Problem: Membership Fees Increase"<<endl;
        cout<<"Type 6 for Problem: Distance Traveled"<<endl;
        cout<<"Type 7 for Problem: Pennies for Pay"<<endl;
        cout<<"Type 8 for Problem: Average Rainfall"<<endl;
        cout<<"Type 9 for Problem: The Greatest and Least of These"<<endl;
        
        cin>>choice;

        //Switch to determine the Problem
        switch(choice){
            
            
     case '1':{
               int  num;
                int input;
              int sum = 0;
    
    
  
       cout << "Please enter a number " << endl;
         cin >> input;
   
    while (input < 0)
    {
        cout << "Try again" << endl;
         cin >> input;
    }	
	
    for (num = 1; num <=input; num++)
    {
        sum++;
        cout << sum << endl;
    }
    
    break;
}
           
            
            
            case '2':{
                 int start;
	for (start = 0; start < 127; start++)
{
	cout << (char)start << " ";
	if (start % 16 == 0)
	cout << endl;
	}
	
                 break;
}
        

          
            
            case '3':{
                float year = 1;
                float rise = 1.5;
   
   
             cout << "Table showing the number of millimeters that the ocean "
            "will have risen each year for the next 25 years" << endl; 
        cout << "-------------------------------------------" << endl;
        cout << " " << endl;
         cout << "years " << "\t\t" << "risen level in millimeters " << endl;
    
    for (rise = 1.5; year <=25; year++)
        
        cout << year << "\t\t" << (rise * year) << endl;
    break;
  }
            
           
            
            case '4':{ 
                float minute; 
          float calories;
            float burn = 3.6;
   
    
    for (minute = 5; minute <= 30; minute += 5)
    {    
        calories = (minute * burn);
        
        cout << " You will burn " << calories << " calories after " << minute << " minutes." << endl;
    
    }
   break;

      }
            case '5':{ 
                float charge = 2500;
    float fee = 0.04;
  
    
   
    
    for (int i = 1; i <=6; i++)
    { 
        charge = (charge * fee) + charge;
    cout << "In year " << i << ", the increase for the membership will cost $" << charge << endl;
    
    }
  
    break;
 
            }
            
            case '6':{
                
                float speed;
            float hours;


cout << "what is the speed of your car in mph?" << endl;
cin >> speed;
cout << "how many hours have you traveled?" << endl;
cin >> hours;


cout << "" << endl;

while (speed <= 0 || hours <=0)
{
    cout << "try again" << endl;
    cout << "what is the speed of your car in mph?" << endl;
    cin >> speed;
    cout << "how many hours have you traveled?" << endl;
    cin >> hours;
    
    
    cout << "Hours \t\tDistance" << endl;
}


for (int i = 1; i <= hours; i++)
{
    
    cout << i << "\t\t" << (i * speed) << " miles" <<endl;
}

    
    
break;
}
            case '7':{
                
                int days;
    float total = 0 ;
    float money = 1;
    float check;
    float m;
    
    
    
    cout << "How many days have you worked?" << endl;
    cin >> days;
    
    while (days <= 0)
    {   
        cout << "try again" << endl;
    
    cout << "How many days have you worked?" << endl;
    cin >> days;
    }
   
    
    for (int i = 1; i <= days; i++)
    {   
        
        m = money / 100;
                
      cout << setprecision (2)<< fixed << showpoint  << endl;
    cout << "Day " << i << " the check is $" << m << endl;
   
    total = total + m;
   
    money = money * 2;
   
    }
   
    
    cout << "the total is $" << total << endl;
    
    
    
    break;
        

        }
            
             case '8':{
                 int years = 0;
    float inches;
    float MONTH = 12;
    float aTotal = 0.0;
    float aInches = 0.0;
    
    cout << "enter the amount of years" << endl;
    cin >> years;
    while (years < 1)
    {
        cout << "try again" << endl;
    
    cout << "enter the amount of years" << endl;
    cin >> years;
    }
    for (int i = 1; i  <= years; i++)
    {
        for (int months = 1; months <= MONTH; months++)
        {
            cout << "enter the rainfall for month " << months << endl;
            cin >> inches;
            while (inches < 0)
            {
                cout << "wrong, try again" << endl;
                cout << "enter the rainfall for month " << months << endl;
                cin >> inches;
            }
            aInches = aInches + inches;
        }
        
    }
    cout << setprecision(2)<< fixed<< endl;
    cout << "Months: " << years * MONTH << endl ;
    cout << "The total of rainfall is " << aInches << endl;
    cout << "average " << aInches / (years * MONTH)<<endl;
             
                 break;
             }
            
             case '9':{
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
    
    
    
    
    break;
}

             
         
       
            
            
            default:
                cout<<"You are exiting the program"<<endl;
        }
    }while(choice>='1'&&choice<='9');
    
    //Exit stage right!
    return 0;
}
