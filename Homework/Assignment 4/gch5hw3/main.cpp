/*Ocean Levels
Assuming the ocean’s level is currently rising at about 1.5 millimeters per year, write
a program that displays a table showing the number of millimeters that the ocean will
have risen each year for the next 25 years.*/

#include <iostream>

using namespace std;


int main() {
    
    float year = 1;
    float rise = 1.5;
   
   
    cout << "Table showing the number of millimeters that the ocean "
            "will have risen each year for the next 25 years" << endl; 
     cout << "-------------------------------------------" << endl;
    cout << " " << endl;
    cout << "years " << "\t\t" << "risen level in millimeters " << endl;
    
    for (rise = 1.5; year <=25; year++)
        
        cout << year << "\t\t" << (rise * year) << endl;
    
    

    return 0;
}

