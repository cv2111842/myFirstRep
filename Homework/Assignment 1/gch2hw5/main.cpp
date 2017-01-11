/*To get the average of a series of values, you add the values up and then divide the sum
by the number of values. Write a program that stores the following values in five different
variables: 28, 32, 37, 24, and 33. The program should first calculate the sum
of these five variables and store the result in a separate variable named sum . Then, the
program should divide the sum variable by 5 to get the average. Display the average
on the screen.*/

#include <iostream>

using namespace std;


int main(int argc, char** argv) {

float sum; 
float average;

sum = 28+32+37+24+33;
average = sum/5;

cout << "The average of 28, 32, 37, 24, 33 is " << average << endl ;

return 0;

}
