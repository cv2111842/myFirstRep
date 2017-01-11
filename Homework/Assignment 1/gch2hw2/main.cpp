/*The East Coast sales division of a company generates 58 percent of total sales. Based

on that percentage, write a program that will predict how much the East Coast division

will generate if the company has $8.6 million in sales this year.*/

#include <iostream> 

using namespace std;

int main() {   double percentage;  

float sales;  

float total;    

percentage = .58;  

sales = 8.6;    

cout << "The East Coast sales division of a company generates 58 percent of total sales" << endl;    

total = percentage*sales;      

cout << "If the company has $8.6 million, then it will generate " << total << " million." << endl;     

}