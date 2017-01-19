/*Areas of Rectangles
The area of a rectangle is the rectangle’s length times its width. Write a program that
asks for the length and width of two rectangles. The program should tell the user which
rectangle has the greater area, or if the areas are the same.*/
#include <iostream>

using namespace std;

int main() {

float length1;
float width1;
float length2;
float width2;

float rectangle1;
float rectangle2;

cout << "Enter the length of the first rectangle" << endl;
cin >> length1;
cout << "Enter the width of the first rectangle" << endl;
cin >> width1;
cout << "Enter the length of the second rectangle" << endl;
cin >> length2;
cout << "Enter the width of the second rectangle" << endl;
cin >> width2;

rectangle1 = length1 * width1;
rectangle2 = length2 * width2;

if (rectangle1 > rectangle2)
{
    cout << "The first rectangle has a greater area than the second rectangle " << endl;
}
        else if (rectangle1 < rectangle2)
        {
    cout << "The second rectangle has a greater area than the first rectangle " << endl;
            
        }
        else if (rectangle1 == rectangle2)
        {
            cout << "The first and second rectangles have the same area " << endl;
        }
   

    return 0;
}

