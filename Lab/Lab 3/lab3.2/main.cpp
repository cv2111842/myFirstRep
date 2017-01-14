/*2)  Calculate the Debt per person given the following years.

Here are your references to use

Population 2008  -> 304 Million

Population 2016  -> 322 Million

http://www.tradingeconomics.com/united-states/population

Federal Debt as of  2008  ->  9.7 Trillion

Federal Debt as of  2016  ->   20 Trillion

http://www.usdebtclock.org/    and    http://www.usdebtclock.org/2008.html*/
#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    
    float people2008(0.000304);
    float people2016(0.000322);
    float debt2008(9.7);
    float debt2016(20);
    
    float person2008;
    float person2016;
    
    person2008 = debt2008 / people2008;
    
    cout << " The debt per person in the United States in 2008 is $" << person2008<< endl;
    
    person2016 = debt2016 / people2016;
    
    cout << " The debt per person in the United States in 2016 is $" << person2016<< endl;

    return 0;
}

