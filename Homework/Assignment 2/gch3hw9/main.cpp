/*How Many Calories?
A bag of cookies holds 30 cookies. The calorie information on the bag claims that there
are 10 “servings” in the bag and that a serving equals 300 calories. Write a program
that asks the user to input how many cookies he or she actually ate and then reports
how many total calories were consumed.*/
#include <iostream>

using namespace std;

/*
 * 
 */
int main() {

    float serving(10);
    float cookies;
    float consumed;
    
    cout << "how many cookies did you eat? ";
            cin >> cookies;
    consumed = (cookies/serving)*300;
    
    cout << "You ate "<< cookies << " cookies which it has aproximately " << consumed << " calories." << endl;
          
    
    
    return 0;
}

