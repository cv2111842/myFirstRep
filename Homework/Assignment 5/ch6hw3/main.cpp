/*Winning Division
Write a program that determines which of a company’s four divisions (Northeast,
Southeast, Northwest, and Southwest) had the greatest sales for a quarter. It should
include the following two functions, which are called by main .
• double getSales() is passed the name of a division. It asks the user for a division’s
quarterly sales figure, validates the input, then returns it. It should be called once for
each division.
• void findHighest() is passed the four sales totals. It determines which is the largest
and prints the name of the high grossing division, along with its sales figure.
Input Validation: Do not accept dollar amounts less than $0.00.*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


//my prototype functions;
float getSales(string);
void findHighest(float, float, float, float);



int main() {

    float nEast, sEast, nWest, sWest;
    cout << "This program will show which company has the highest sale for a quarter" << endl;
    
    // for prototype 1
        nEast = getSales("Northeast");
	sEast = getSales("Southeast");
	nWest = getSales("Northwest");
	sWest = getSales("Southwest");
        
        //prototype 2
        findHighest (nEast, sEast, nWest, sWest);
    
    return 0;
}


//prototype 1
// the getSales function is here
float getSales(string division)
{
    float x;
    do 
    {
    
    cout << "What is the sales for " << division << " in the quarter?" << endl;
    cin >> x;
    
    if (x < 0)
        cout << "Incorrect, it has to be greater than 0" << endl;
    } while (!(x > 0));
    return x;
}


//prototype 2
void findHighest(float nEast, float sEast, float nWest, float sWest)
 
{

float y;
 
 	

	if (nEast > sEast && nEast > nWest && nEast > sWest)
	{
		y = nEast;
		cout << "Northeast ";
	}
	else if (sEast > nEast && sEast > nWest && sEast > sWest)
	{
		y = sEast;
		cout << "Southeast ";
	}
	else if (nWest > sEast && nWest > nEast && nWest > sWest)
	{
		y = nWest;
		cout << "Northwest ";
	}
	else if (sWest > nEast && sWest > sEast && sWest > nWest)
	{
		y = sWest;
		cout << "Southwest ";
	}
    cout << fixed << showpoint << setprecision(2);
	cout << y << " is the highest of them all" << endl;
	
}