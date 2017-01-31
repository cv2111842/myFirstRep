/*Characters for the ASCII Codes
Write a program that uses a loop to display the characters for the ASCII codes 0
through 127. Display 16 characters on each line.*/



#include <iostream>
using namespace std;

int main(){

    int start;
	for (start = 0; start < 127; start++)
{
	cout << (char)start << " ";
	if (start % 16 == 0)
	cout << endl;
	}
	
	return 0;
}

