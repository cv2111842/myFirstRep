/*Chips and Salsa
Write a program that lets a maker of chips and salsa keep track of sales for five different
types of salsa: mild, medium, sweet, hot, and zesty. The program should use two
parallel 5-element arrays: an array of strings that holds the five salsa names and
an array of integers that holds the number of jars sold during the past month for each
salsa type. The salsa names should be stored using an initialization list at the time the
name array is created. The program should prompt the user to enter the number of jars
 sold for each type. Once this sales data has been entered, the program should produce
a report that displays sales for each salsa type, total sales, and the names of the highest
selling and lowest selling products.
Input Validation: Do not accept negative values for number of jars sold.*/

#include <iostream>
#include <string>

//prototype 1
int low (int[], int);
//prototype 2
int high (int[], int);



using namespace std;
	

int main( ) {
    
    
    const int SIZE = 5;
    int highestResult;
    int lowestResult;
    string salsa[SIZE] = {"mild","medium","sweet","hot", "zesty"} ;
    int sales[SIZE];
    int total = 0;
    
     for (int i = 0; i < 5; i++)
     {
        
        cout << "Enter the amount of salsa sold for " << salsa[i] << " :"<< endl;
        cin >>sales[i];
       
       
        while (sales [i] < 0)
       
        {
            cout << "Incorrect input" << endl;
        cin >> sales[i];
        }
     
         
         
     }
     
    cout << "\nSales report for the month\n" << endl;
    for (int i = 0; i < 5; i++)
     {
        cout << salsa[i] << " sold: " << sales[i] << " jars this month" << endl;
        total = total+sales[i];
     }
    
    cout << "\nTotal jars sold: " << total << endl;
    
    highestResult = high(sales,SIZE);
    
    cout << "the highest selling salsa was " << salsa[highestResult] << " and it"
            " sold " << sales[highestResult] << " jars." << endl;
    
    lowestResult = low(sales,SIZE);
    
    cout << "the Lowest selling salsa was " << salsa[lowestResult] << " and it"
            " sold " << sales[lowestResult] << " jars." << endl;
    

    return 0;
}

//prototype 1
int high (int sales[], int SIZE)
{
    
    int x = 0;
    
    for(int i=0; i<SIZE; i++)
    {
        if (sales[i] > sales[x])
            x = i;
    }
    
    return x;
	
}


//prototype 2
int low (int sales[], int SIZE)
{
    
    int x = 0;
    
    for(int i=0; i<SIZE; i++)
    {
        if (sales[i] < sales[x])
            x = i;
    }
    
    return x;
	
}