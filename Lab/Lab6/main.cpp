/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on February 6th, 2017, 10:23 PM
  Purpose: Mark Sort with 3 functions
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another

//Function Prototypes
void filAray(int [],int);
void prntAry(int [],int,int);
void markSrt(int [],int);

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=200;
    const int utilize=SIZE/2;
    int array[utilize]={};
    
    //Input values
    filAray(array,utilize);
    prntAry(array,utilize,10);
    
    //Process by mapping inputs to outputs
    markSrt(array,utilize);
    
    //Output values
    prntAry(array,utilize,10);

    //Exit stage right!
    return 0;
}

void markSrt(int a[],int n){
    
    for(int i=0;i<n-1;i++)
    {
     int pos = i;   
        for(int i=pos+1;i<n;i++)
        {
            
            
            if(a[pos]>a[i])
            {
            int y =a[pos];
            int x =a[i];  
               x=x^y;
               y=x^y;
               x=x^y;

               (a[pos],a[i]);   
            }
        }
    }
       
        
}



void prntAry(int a[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==perLine-1)cout<<endl;
    }
    cout<<endl;
}

void filAray(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;
    }
}
