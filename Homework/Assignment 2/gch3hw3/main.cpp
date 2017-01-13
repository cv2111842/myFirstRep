/*Test Average
Write a program that asks for five test scores. The program should calculate the average
test score and display it. The number displayed should be formatted in fixed-point
notation, with one decimal point of precision.*/
#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    
    int test1;
    int test2;
    int test3;
    int test4;
    int test5;
    int average;
    
    
    cout << "What is the score for test 1?" << endl ;
    cin >> test1;
    cout << "What is the score for test 2?" << endl ;
    cin >> test2;
    cout << "What is the score for test 3?" << endl ;
    cin >> test3;
    cout << "What is the score for test 4?" << endl ;
    cin >> test4;
    cout << "What is the score for test 5?" << endl ;
    cin >> test5;
    
    average = (test1+test2+test3+test4+test5)/5;
    
    cout << "The average score for all 5 tests is " << average << endl;

    return 0;
}

