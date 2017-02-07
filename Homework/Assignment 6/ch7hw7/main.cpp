/*Number Analysis Program
Write a program that asks the user for a file name. Assume the file contains a series of
numbers, each written on a separate line. The program should read the contents of the
file into an array and then display the following data:
• The lowest number in the array
• The highest number in the array
• The total of the numbers in the array
• The average of the numbers in the array
If you have downloaded this book’s source code from the companion Web site, you
will find a file named numbers.txt in the Chapter 07 folder. You can use the file to
test the program. (The companion Web site is at www.pearsonhighered.com/gaddis .)*/

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {

    double sum = 0;        // this will be used to add up the values in the file
    int num = 0;        // will get the number that is ibn the file
    int count = 0;      // will be used as a counter.
    int array[count];   //
    int highest = 0;    //
    int lowest = 1000000000000000000000000000000;     // big number but i dont want strange results
    double avg = 0.0;     // average
    
   
    // insert the file from the folder
    ifstream infile;
    
    infile.open("numberList.txt"); //write the folder 
    
  // reads continously until end of file
        while (infile >>num)
        {
            sum += num;
            count++;
    
    for(int i = 0; i < count; i++)
    {
       array[i] = num ;
    }
    for (int i = 0; i < count; i++)
    {
        if (array[i] > highest)
        {
            highest = array [i];
        }
    }
    
    for (int i = 0; i < count; i++)
    {
        if (array[i] < lowest)
        {
            lowest = array [i];
        }
    }
    
    avg = sum/count;
        }
    cout << "The lowest number is " << lowest << endl;
    cout << "The highest number is " << highest << endl;
    cout << "total of all the numbers is : " << sum << endl;
    cout << "The average of the numbers is " << avg << endl;
        
        
    return 0;
}
