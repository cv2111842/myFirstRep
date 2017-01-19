/*Body Mass Index
Write a program that calculates and displays a person’s body mass index (BMI). The
BMI is often used to determine whether a person with a sedentary lifestyle is overweight
or underweight for his or her height. A person’s BMI is calculated with the
following formula:
BMI  weight  703 / height2
where weight is measured in pounds and height is measured in inches. The program
should display a message indicating whether the person has optimal weight, is underweight,
or is overweight. A sedentary person’s weight is considered to be optimal if his
or her BMI is between 18.5 and 25. If the BMI is less than 18.5, the person is considered
to be underweight.*/
#include <iostream>

using namespace std;

int main() {
    
    float weight;
    float height;
    float bmi;
    
    cout << "Enter the weight" << endl;
    cin >> weight;
    cout << "Enter the height" << endl;
    cin >> height;
   
    bmi = (weight * 703) / (height * height);
    
    if (bmi > 25)
        cout << "overweight" << endl;
    else if (bmi < 18.5)
        cout << "underweight" << endl ;
    else if (bmi > 18.5 && bmi < 25)
        cout << "optical" << endl;
   
    
    

    return 0;
}

