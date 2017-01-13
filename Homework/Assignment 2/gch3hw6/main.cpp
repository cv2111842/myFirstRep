/*Ingredient Adjuster
A cookie recipe calls for the following ingredients:
• 1.5 cups of sugar
• 1 cup of butter
• 2.75 cups of flour
The recipe produces 48 cookies with this amount of the ingredients. Write a program
that asks the user how many cookies he or she wants to make, and then displays the
number of cups of each ingredient needed for the specified number of cookies.*/

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    float sugar(.03);
    float butter(.02);
    float flour(.05);
    
    float totalSugar, totalButter, totalFlour;
    float cookies;
    
    //float totalIngredient;
    
    cout <<"How many many cookies would you like to make?" << endl;
    cin >> cookies;
    totalSugar = cookies*sugar;
    totalButter = cookies*butter;
    totalFlour = cookies*flour;
    
    cout <<"You will need " << totalSugar << " cups of sugar, " << totalButter << " cups of butter, and " << totalFlour << " cups of flour to make " <<cookies << " cookies." << endl;
    
    
    

    return 0;
}

