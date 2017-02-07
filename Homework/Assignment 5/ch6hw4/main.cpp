/*Safest Driving Area
Write a program that determines which of five geographic regions within a major city
(north, south, east, west, and central) had the fewest reported automobile accidents last
year. It should have the following two functions, which are called by main .
• int getNumAccidents() is passed the name of a region. It asks the user for the
number of automobile accidents reported in that region during the last year, validates
the input, then returns it. It should be called once for each city region.
• void findLowest() is passed the five accident totals. It determines which is the
smallest and prints the name of the region, along with its accident figure.
Input Validation: Do not accept an accident number that is less than 0.*/
#include <iostream>
#include <string>


using namespace std;

//prototype 1
int getNumAccidents(string);
//prototype 2
void findLowest(int, int, int, int, int);


int main() {
    int n, s, e, w, c;
    
    for (int i = 0; i < 5; i++)
    {
        
        switch (i)
        {
         case 0:
                    n = getNumAccidents(" North");
                    break;
         case 1:
                    s = getNumAccidents(" South");
                    break;
         case 2:
                    e = getNumAccidents(" East");
                    break;   
         case 3:
                    w = getNumAccidents(" West");
                    break;           
         default:
                    c = getNumAccidents(" Central");
                    break;
        
        }           
    
    
    }
     
    findLowest (n, s, e, w, c);
    

    return 0;
}

int getNumAccidents (string region)
{
    int accidents = 0;
    cout << "Enter the accidents for region" << region << " " << endl;
    cin >> accidents;
    
    while (accidents < 0)
    {
        cout << "incorrect, the number has to be larger than zero" << endl;
        cin >> accidents;
        
    }
    

    return accidents;
    
}


void findLowest (int north, int south, int east, int west, int central)
{

int lowest = 0;
string region = "";


if (north < south && north < east && north < west && north < central)
    
{
    lowest = north;
    region = "North";
}

else if (south <north  && south < east && south < west && south < central)
    
{
    lowest = south;
    region = "South";
}

else if (east < south && east < north && east < west && east < central)
    
{
    lowest = east;
    region = "East";
}

else if (west < south && west < east && west < north && west < central)
    
{
    lowest = west;
    region = "West";
}

else 
{
    lowest = central;
    region = "Central";
    
}

cout << "The lowest accidents in the region is " << region << endl;
cout << "The total accidents in the region is " << lowest << endl;
    
}
    