/*A customer in a store is purchasing five items. The prices of the five items are
Price of item 1 = $15.95
Price of item 2 = $24.95
Price of item 3 = $6.95
Price of item 4 = $12.95
Price of item 5 = $3.95
 Write a program that holds the prices of the five items in five variables. Display each
item’s price, the subtotal of the sale, the amount of sales tax, and the total. Assume the
sales tax is 7%*/
#include <iostream>

using namespace std;

int main (){
    
    float item1 (15.95);
    float item2 (24.95);
    float item3 (6.95);
    float item4 (12.95);
    float item5 (3.95);
    float tax (.07);
    
    float subTotal;
    float totalTax;
    float total;
    
    subTotal = item1+item2+item3+item4+item5;
    totalTax = subTotal*tax;
    total = (subTotal*tax)+subTotal;
    
    
    cout <<"Item 1 is $"<< item1 << endl;
    cout <<"Item 2 is $"<< item2 << endl;
    cout <<"Item 3 is $"<< item3 << endl;
    cout <<"Item 4 is $"<< item4 << endl;
    cout <<"Item 5 is $"<< item5 << endl;
            
    cout << "The subtotal of the five items is $"<<subTotal << endl;
     cout << "The sales tax of the five items is $"<<totalTax << endl;
    cout << "The total of the five items is $"<<total << endl;
    
    
  
}