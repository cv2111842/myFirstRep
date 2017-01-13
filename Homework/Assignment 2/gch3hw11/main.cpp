/*Automobile Costs
Write a program that asks the user to enter the monthly costs for the following
expenses incurred from operating his or her automobile: loan payment, insurance, gas,
oil, tires, and maintenance. The program should then display the total monthly cost of
these expenses, and the total annual cost of these expenses.*/

#include <iostream>

using namespace std;

/*
 * 
 */
int main() {

    float loan;
    float insurance;
    float gas;
    float oil;
    float tires;
    float maintenance;
    float total;
    
    cout << "What is the montly cost for your car loan" << endl;
    cin >> loan;
    cout << "What is the montly cost for your insurance" << endl;
    cin >> insurance;
    cout << "What is the montly cost for your gas" << endl;
    cin >> gas;
    cout << "What is the montly cost for your oil" << endl;
    cin >> oil;
    cout << "What is the montly cost for your tires" << endl;
    cin >> tires;
    cout << "What is the montly cost for your maintenance" << endl;
    cin >> maintenance;
    
    total = loan + insurance + gas + oil + tires + maintenance;
    
    cout << "The total monthly cost for you car including all the expenses is $" << total << endl;
    
    
    
    
    
    return 0;
}

