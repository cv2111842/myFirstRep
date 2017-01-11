/*Sales Tax
Write a program that will compute the total sales tax on a $95 purchase. Assume the
state sales tax is 4 percent and the county sales tax is 2 percent.*/

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    float stateTax (.04);
    float countyTax (.02);
    float purchase (95);
    float stateTotal;
    float countyTotal;
   
    stateTotal = ((stateTax*purchase)+purchase);
    countyTotal = ((countyTax*purchase)+purchase);
    
    cout << "The total amount of $95 on State purchase is $" << stateTotal << endl;
    cout << "The total amount of $95 on County purchase is $" << countyTotal << endl;
    
    return 0;
}

