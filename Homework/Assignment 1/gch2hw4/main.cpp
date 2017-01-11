/*Restaurant Bill
Write a program that computes the tax and tip on a restaurant bill for a patron with
a $88.67 meal charge. The tax should be 6.75 percent of the meal cost. The tip should
be 20 percent of the total after adding the tax. Display the meal cost, tax amount, tip
amount, and total bill on the screen.*/
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    float charge (88.67);
    float tax (.0675);
    float tip (.2);
    float taxAmount;
    float tipAmount;
    float totalBill;
    
    taxAmount = charge*tax;
    tipAmount = (taxAmount+charge)*.2;
    totalBill = tipAmount+taxAmount+charge;
    
    cout << "The meal cost is $" << charge  << endl;
    cout << "The tax amount is $" << taxAmount << endl;
    cout << "The tip amount is $" << tipAmount << endl;
    cout << "The total bill with tax and tip is $" << totalBill << endl;
    return 0;
}

