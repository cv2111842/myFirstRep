/*Change for a Dollar Game
Create a change-counting game that gets the user to enter the number of coins required
to make exactly one dollar. The program should ask the user to enter the number of
pennies, nickels, dimes, and quarters. If the total value of the coins entered is equal to
one dollar, the program should congratulate the user for winning the game. Otherwise,
the program should display a message indicating whether the amount entered was more
than or less than one dollar.*/
#include <iostream>

using namespace std;


int main() {

    float pennies, nickels, dimes, quarters, total;
    
    
    cout << "Enter the pennies" << endl;
    cin >> pennies;
    cout << "Enter the nickles" << endl;
    cin >> nickels;
    cout << "Enter the dimes" << endl;
    cin >> dimes;
    cout << "Enter the quarters" << endl;
    cin >> quarters;
    
    total = (pennies * 0.01) + (nickels * 0.05) + (dimes * 0.10) + (quarters * 0.25);
    
    if (total == 1.00)
        cout << "Congratulations, you have exactly one dollar!" << endl ;
    else if (total < 1.00)
        cout << "try again" << endl;
    
    
    
    
    return 0;
}

