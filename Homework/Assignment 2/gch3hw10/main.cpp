/*How Much Insurance?
Many financial experts advise that property owners should insure their homes or buildings
for at least 80 percent of the amount it would cost to replace the structure. Write a
program that asks the user to enter the replacement cost of a building and then displays
the minimum amount of insurance he or she should buy for the property.*/
#include <iostream>

using namespace std;

/*
 * 
 */
int main() {

    float insurancePercentage(.8);
    float buildingPrice;
    float insuranceCost;
    
    
    cout << "Enter the price to replace the structure" << endl;
    cin >> buildingPrice;
    
    insuranceCost = buildingPrice*insurancePercentage;
    cout << "The minimum amount of insurance you should buy for the property is $" << insuranceCost << endl;
    
    return 0;
}

