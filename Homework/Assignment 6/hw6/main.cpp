/*Rain or Shine
An amateur meteorologist wants to keep track of weather conditions during the
past year’s three-month summer season and has designated each day as either rainy
(‘R’), cloudy (‘C’), or sunny (‘S’). Write a program that stores this information in a
3 × 30 array of characters, where the row indicates the month (0 = June, 1 = July,
2 = August) and the column indicates the day of the month. Note that data are not
being collected for the 31st of any month. The program should begin by reading the
weather data in from a file. Then it should create a report that displays, for each
month and for the whole three-month period, how many days were rainy, how many
were cloudy, and how many were sunny. It should also report which of the three
months had the largest number of rainy days. Data for the program can be found in
the RainOrShine.txt file.*/

#include <iostream> 
#include <string>
#include <fstream>

using namespace std;

int main ()
{
    int month [2];
    int days [29];
    int n = 0;
 //   string weather [month] [days] = {"June", "july", "August"};
    
    int rain;
    int sun;
    int cloud;
    
   
  
   ifstream infile;
   infile.open("RainOrShine.txt");


    
   while (infile >> n)
   {
       for (int i = 0 ; i < 3 ; i++)
       {
           month[i];
           {
               for (int i = 0 ; i < 30 ; i++)
               {
                   days[i]=n; 
                   cout << n << endl;
               }
           }
           
           cout << month[i] << endl;
       }
       
       
   }
    
  
    
    
    
}