
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <cstdlib> // For rand and srand
#include <ctime> // For the time function


using namespace std;


int main() {
    
    
    
    char choice;
    
    
    
    
    do{
    
        
        
        
        
        
         
        
        cout<<"Choose from the list"<<endl;
        cout<<"(1)Hero's Adventure"<<endl;
        cout<<"(2)Leaderboard"<<endl;
        cout<<"(3)Exit"<<endl;
        
        cin>>choice;
        
        switch(choice){
        
         case '1':{
        
             
             
             string name;
             
    
    const int lotteryMin = 1;
    const int lotteryMax = 41;
    const int megaBall1 = 1;
    const int megaBall2 = 27;
    
    const int minHit = 2;
    const int maxHit = 49;
   // Get the system time.
    unsigned seed = time(0);
    srand(seed);
    
    int attack;
    int damage;
    int damage2;
    int total;
    int total2;
    int y, one, two, three, four, five, mega;
    int end;
    
    char a, b, A, B;
    int choose1;
    int hp = 100;
    int mHp = 100;   
        
        
        
    
    cout << setw(45)<< "Welcome to THE HERO'S ADVENTURE." << endl;
    cout << setw(50)<< "------------------------------------------ "<< endl;
    cout << "We will now create the hero's name" << endl;
    cout << endl;
    cout << "Please input the hero's name " << endl;
    
    cin >> name;
    cout << endl;
    cin.get();
    cout << "Hello " << name << ", your adventure starts now!" << endl;
    cout << "You now posses the power of the hero "<< name << ". " << endl;
    cout <<  name << " starts with 100 health points (HP). Depending on the monster's attack, the hero may get hurt and reduce HP." << endl;
    cout << "When the health points reach to zero, " << name << " will faint and you will lose the game [enter]" << endl;
    cin.get();
    cout << name << "'s mission is to find pathways to find the flash drive. [enter]" << endl;
    cout << endl;
    cin.get();
    cout << "A flash drive has been captured by a monster named Bahamut which is responsible for this. [enter]" << endl;
    cin.get();
    cout << "You start the game at the Riverside college leaving from a math class. \n";
    cout << "You get a video message from Professor Lehr telling you that the \n";
    cout << "flash drive has been captured by a monster named Bahamut which is located in the far mountains [enter]\n";
    
    cout << endl;
    cin.get();
    cout << "Please choose a path 1 or 2: " << endl;
    cout << endl;
    
    cout << " 1) Go to the nearest cave" << endl;
    cout << " 2) Go to the mines " << endl;
    cin >> choose1;
    
    while ( choose1 < 1 || choose1 > 2)
        
    {
        cout << "Try again " << endl;
        cout << "Please choose a path 1 or 2: " << endl;
        cout << endl;
    
        cout << " 1) Go to the cave" << endl;
        cout << " 2) Go to the mines " << endl;
         cin >> choose1;
    }
    
    
    if (choose1 == 1)
    {
        cout << "You chose the cave and turned on the light." << endl;
        cout << "As you go near, you encounter the monster and he is ready to fight you" << endl;
    }
    else if (choose1 == 2)
    {
        cout << "As you go to the mines, it gets cold and you hear a monster from far away" << endl;
    
    cout << "you encountered Bahamut and he is ready to fight you " << endl;
    }
     
        
    
    
   
    do
    {
    y = (rand() & (maxHit - minHit + 1 )) + minHit;
        
     
        cout << "choose an attack: "<< endl;
        cout << "1) Punch"<<endl;
        cout << "2) kick"<<endl ;
        cout << "3) Mega Blast" << endl;
                cin >> attack;
                
             
               
                 
   while ( attack < 1 || attack > 3)
                    
    {
        cout << "try again" << endl;
        cout << " repeat choose an attack: "<< endl;
        cout << "1) Punch"<<endl;
        cout << "2) kick"<<endl ;
        cout << "3) Mega Blast" << endl;
       cin >> attack;           
     }
   
             
             
             
                if (attack == 1)
     {
         attack = 5;
              mHp = mHp - attack;      
         cout << "the attack was a punch leaving the monster with "<< mHp << " of HP " << endl;
     }
    else if (attack == 2)
    {
        attack = 10;
   mHp = mHp - attack;
   cout << "the attack was a kick leaving the monster with "<< mHp << " of HP " << endl;
    }
    
    else if (attack == 3)
    {
        attack = 20;
        mHp = mHp - attack;
   cout << "the attack was a powerful mega blast leaving the monster with "<< mHp << " of HP " << endl;
    }
               
                
                 
                if (y >= 30)
                    
                   
                { hp = hp - y;  
                 cout << "The monster attacks removing " << y << " of your health points which is a critical hit! and now you have "<< hp << " HP" << endl;
                } else{
                     
                   hp = hp - y;
                    cout << "The monster attacks removing " << y << " of your health points and now you have "<< hp << " HP" << endl;
                }     
     //Save the remaining hp and loop the attack
                
                
                cout << hp << endl;
                if (mHp <= 0 )
                {    
                    cout<< " monster reaches to 0" << endl;
                
                }
                
                else if (hp <= 0 )
                {
                    cout<< " player reaches to 0" << endl;
                
                }
              
                
    } while ( hp < 0 || mHp < 0 ); // here is where i spent all day wasting my time 
    //trying to find out why it was ignoring this.
     {
    
    cout << "end of attacks" << endl;
     }
    
    cout << "The flash drive has been found and now the world is safe from Bahamut!" << endl;
    cout << endl;
    cout << "Congratulations for winning the game; here are some lottery numbers:" << endl;
    
    one = (rand() & (lotteryMax - lotteryMin + 1 )) + lotteryMin;
    two = (rand() & (lotteryMax - lotteryMin + 1 )) + lotteryMin;
    three = (rand() & (lotteryMax - lotteryMin + 1 )) + lotteryMin;
    four = (rand() & (lotteryMax - lotteryMin + 1 )) + lotteryMin;
    five = (rand() & (lotteryMax - lotteryMin + 1 )) + lotteryMin;
    mega = (rand() & (megaBall2 - megaBall1 + 1 )) + megaBall1;
    
    cout << endl; 
    cout << one << ", "<< two << ", " << three << ", " << four << ", " << five << ", " << mega << endl;
    
         
         
    
   break;
}
          case '2':{
              
              
              
            
              int rank;
              int z;
              int minScore = 100000;
              int maxScore = 999999;
              
              
              cout << "\t\t\t Leaderboard" << endl;
             cout <<"Rank \t" << "Name" << "\t\tScore" << endl;
              
              for (int i = 1; i <= 10; i++)
              {
                  z = (rand() & (maxScore - minScore + 1 )) + minScore;
                int n = rand() % 26;
                int m = rand() % 26;
                int p = rand() % 26;
                char d = (char)(n+65);
                char e = (char)(m+65);            
                char f = (char)(p+65);
              
                          cout << i << "\t"<< d << e << f << "\t\t" << z << endl;
                      
                          
              }
                        
                          
                          
                          
              
          }
           break;
          case '3':{
              cout << " You exit the game" << endl;
          
              break;
          }
         }
   
         }// choice close bracket
           while(choice>='1'&&choice<='3'); //do close bracket
 

         
return 0;
}