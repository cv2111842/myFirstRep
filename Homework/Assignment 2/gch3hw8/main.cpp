/*The Yukon Widget Company manufactures widgets that weigh 12.5 pounds each.
Write a program that calculates how many widgets are stacked on a pallet, based on
the total weight of the pallet. The program should ask the user how much the pallet
weighs by itself and with the widgets stacked on it. It should then calculate and display
the number of widgets stacked on the pallet.*/
#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    
    float widget (12.5);
    float weigh;
    float pallet;
    
    
    cout << "How much does the pallet weighs?" << endl;
    cin >> weigh;
    pallet = weigh/widget;
    cout << "There are " << pallet << " widgets in one pallet." << endl;
    

    return 0;
}

