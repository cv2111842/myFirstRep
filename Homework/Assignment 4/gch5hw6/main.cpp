/*6. Distance Traveled
The distance a vehicle travels can be calculated as follows:
distance = speed * time
For example, if a train travels 40 miles per hour for 3 hours, the distance traveled is
120 miles.
Write a program that asks the user for the speed of a vehicle (in miles per hour) and how
many hours it has traveled. The program should then use a loop to display the distance the
vehicle has traveled for each hour of that time period. Here is an example of the output:
What is the speed of the vehicle in mph? 40
How many hours has it traveled? 3
Hour Distance Traveled
--------------------------------
1 40
2 80
3 120
Input Validation: Do not accept a*/
#include <iostream>

using namespace std;

int main() {

    
float speed;
float hours;


cout << "what is the speed of your car in mph?" << endl;
cin >> speed;
cout << "how many hours have you traveled?" << endl;
cin >> hours;


cout << "" << endl;

while (speed <= 0 || hours <=0)
{
    cout << "try again" << endl;
    cout << "what is the speed of your car in mph?" << endl;
    cin >> speed;
    cout << "how many hours have you traveled?" << endl;
    cin >> hours;
    
    
    cout << "Hours \t\tDistance" << endl;
}


for (int i = 1; i <= hours; i++)
{
    
    cout << i << "\t\t" << (i * speed) << " miles" <<endl;
}

    
    
    return 0;
}

