/*Markup
Write a program that asks the user to enter an item’s wholesale cost and its markup
percentage. It should then display the item’s retail price. For example:
• If an item’s wholesale cost is 5.00 and its markup percentage is 100%, then the
item’s retail price is 10.00.
 
 • If an item’s wholesale cost is 5.00 and its markup percentage is 50%, then the item’s
retail price is 7.50.
The program should have a function named calculateRetail that receives the
wholesale cost and the markup percentage as arguments and returns the retail price
of the item.
Input Validation: Do not accept negative values for either the wholesale cost of the
item or the markup percentage.
 */

#include <iostream>

using namespace std;

float wholeSaleCost(float, float);






int main(int argc, char** argv) {
    float price;
    float markup;
    
    cout << "Enter the price for the whole sale item" << endl;
    cin >> price;
    
    while(price <0 )
    {cout<<"Please try again" << endl;
     cout << "Enter the price for the whole sale item" << endl;
     cin >>price;
     }
    cout << "What is the markup percent?" << endl;
    cin >> markup;
    
    while(markup < 0)
    {
     cout<<"Please try again" << endl;
     cout << "What is the markup percent?" << endl;
     cin>>markup;
     }
    
    cout<<"The retail Price is $"<< wholeSaleCost(price,markup) << endl;
    return 0;
}  
    float wholeSaleCost(float x, float y)
    {
    y = y /100;
    return x + x * y;
    }
    

   

