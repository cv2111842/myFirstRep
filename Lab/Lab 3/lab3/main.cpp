/*1)  Write a program to calculate the percentage of the federal budget that the Military and NASA are funded.  You might be surprised.

Here are your references to use for 2016

3.54 Trillion       US total spending -->  http://federal-budget.insidegov.com/l/119/2016-Estimate  ->  3.54 trillion

$580 Billion       Military Budget -> https://cit.com/thought-leadership/us-defense-spending-industry-outlook/?cmp=paidsearch&gclid=CPmllfC1uNECFQRsfgodj-cAEA&jcpid=8a8ae4cd56581431015659d1200a185b&jsf=5ec7b876-08cf-488f-876c-21ae0d1e84e9:35584

18.5 Billion       NASA Budget ->  https://www.nasa.gov/sites/default/files/files/NASA_FY2016_Summary_Brief_corrected.pdf

*/
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main() {
    
    float total(3500000000000);
    float military(580000000000);
    float nasa(18500000000);
   
    float militaryPercentage;
    float nasaPercentage;
    
    militaryPercentage = (military / total)*100;
    
    cout << "The percentage for the Military budget is %" << setprecision (2)<< fixed << militaryPercentage << endl;
    
    nasaPercentage = (nasa / total)*100;
    
    cout <<"The percentage for the Nasa budget is %" <<  setprecision (2)<< fixed << nasaPercentage << endl;

    return 0;
}

