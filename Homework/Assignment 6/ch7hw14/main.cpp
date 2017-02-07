

#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

int main() {

    
    const int SIZE = 5; //amount of numbers
    int userPick[SIZE];//making the size into an array
    int lottery[SIZE];//making the lottery into an array
    int count = 0; //to count the match from the users numbers to the random numbers
    int i;
    srand(time(0));
    
    cout << "Lottery application, please enter 5 numbers from 1 to 10:" << endl;
           
    
    //repeat the input 5 times
    for(int i = 0; i < SIZE; i++)
    {
       cin >> userPick[i];
    }
   
    cout << endl << "Lottery numbers are : " << endl;
    
    // use random for 5 numbers
    for (int i=0; i< SIZE;i++)
    {
      lottery[i] = rand()% 10+1;
      cout << lottery[i] << " "; 
    }
    
   
    //return the input from user
    cout << endl << "Your numbers are : \n";
    for (int i = 0; i < SIZE; i++)
    {
        cout << userPick[i] << " " ;

    }
    
    
    // find the number that matched
    for (int i=0; i< SIZE;i++)
    {
        if (userPick[i] == lottery[i])
        {
            count++;
        }
    }
    cout << endl;
    cout << "you have a match " << count << " of the lottery numbers" << endl;
    return 0;
}