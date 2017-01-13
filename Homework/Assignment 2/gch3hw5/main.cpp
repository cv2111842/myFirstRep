/*Male and Female Percentages
Write a program that asks the user for the number of males and the number of females
registered in a class. The program should display the percentage of males and females
in the class.
Hint: Suppose there are 8 males and 12 females in a class. There are 20 students in the
class. The percentage of males can be calculated as 8 ÷ 20 = 0.4, or 40%. The percentage
of females can be calculated as 12 ÷ 20 = 0.6, or 60%.*/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main() {
    
    int male;
    int female;
    
    float total;
    float malePercentage;
    float femalePercentage;
    
    cout << "How many males are in the classroom?" <<endl;
    cin >> male;
    cout << "How many females are in the classroom?" <<endl;
    cin >> female;  
    
    total = male + female;
    malePercentage = male/total;
    femalePercentage = female/total;
    cout << "there are a total of "<< total << " students. There are "<< setprecision (2) << fixed << showpoint <<malePercentage << " percent in males and "<< femalePercentage << " percent in females in the classroom." << endl;
    
    

    return 0;
}

