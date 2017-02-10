#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <cstdlib> // For rand and srand
#include <ctime> // For the time function
#include <fstream>


using namespace std;

// prototype 
void attackSequence(int, int, int, int, int, int);


//to randomize the player's attack power digits
int userPower (int);

//to randomize the monster's attack power digits
int monsterAttack (int, int, int);


//i needed to have this string outside to use it outside the main function

string name;

int main() {
    
    
   
   
    
       // menu 
       char choice;
    
       // do will repeat the menu until another number or letter is pressed
    do{
        
        cout<<"Choose from the list"<<endl;
        cout<<"(1)Hero's Adventure"<<endl; 
        cout<<"(2)Leaderboard"<<endl; //arrays, sorting 
        cout<<"(3)Credit"<<endl;// ifstream
        
        cin>>choice;
        
        switch(choice){
        
         case '1':{
        
             
             
             
          
    
    const int lotteryMin = 1;
    const int lotteryMax = 41;
    const int megaBall1 = 1;
    const int megaBall2 = 27;
    
    const int minHit = 1;
    const int maxHit = 600;
   // Get the system time.
    unsigned seed = time(0);
    srand(seed);
    
    int attack;
   
    int y, one, two, three, four, five, mega;
    
    
    
    int choose1;
    int hp = 1000;
    int mHp = 1000;   
        
        
        
    
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
    cout <<  name << " starts with 1000 health points (HP). Depending on the monster's attack, the hero may get hurt and reduce HP." << endl;
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
        cout << "You chose the cave and turned on your flashlight that Professor Lehr gave you." << endl;
        cout << "As you go near, you encounter the monster swallowing the flash drive and he is ready to fight you" << endl;
    }
    else if (choose1 == 2)
    {
        cout << "As you go to the mines, it gets cold and you hear a monster from far away" << endl;
    
    cout << "you encountered Bahamut and he is ready to fight you " << endl;
    }
     
        
    
   attackSequence ( maxHit,  minHit,  attack, y, mHp, hp );
   
   
    
    
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
              
              
              
              
              
              int n = rand() % 26;
              int m = rand() % 26;
              int p = rand() % 26;
              char d = (char)(n+65);
              char e = (char)(m+65);            
              char f = (char)(p+65);
              int rank [10]; //arrays
              int z;
              int minScore = 100000;
              int maxScore = 999999;
               unsigned seed = time(0);
    srand(seed);
              
              
              cout << "\t\t\t Leaderboard" << endl;
             cout <<"Rank \t" << "Name" << "\t\tScore" << endl;
              
              for (int i = 0; i <= 10; i++)
              {
                  z = (rand() & (maxScore - minScore + 1 )) + minScore;
               
                 rank[i] = z;
                 
              }                       

     int start = 0;
        

    bool swapped=true;


    while(swapped)
    {


        swapped=false;


        for(int i=0; i<10; i++)
        {

            if (rank[i] < rank[i+1])
            {

                start = rank[i];
   
                rank[i] = rank[i+1];

                rank[i+1]= start;

                swapped = true;

            }
        }
    }

                 
                 for (int i = 1; i <= 10; i++)
                 {
                      int n = rand() % 26;
                int m = rand() % 26;
                int p = rand() % 26;
                char d = (char)(n+65);
                char e = (char)(m+65);            
                char f = (char)(p+65);
              cout << i << "\t"<< d << e << f << "\t\t" << rank[i] << endl; //leaderboard 
                      
                 }        
              
                        
             break;
        }
        
     case '3':{
         
         
         
      
         ifstream inputFile;  
         string instring;
         
         inputFile.open("credits.txt");
         getline(inputFile, instring);
         inputFile.close();
         
       
         
         cout << instring << endl;
         
       
          
          
          
          break;
     }
          
      
       default:
                cout<<"You are exiting the program"<<endl;
    }
         
   
       
    }
while(choice>='1'&&choice<='3');
 return 0;
}
    
    
   void attackSequence (int maxHit, int minHit, int attack, int y, int mHp, int hp )
{
     attack = 0;
     int power =  0;
     int choice = 0;
     int hit;
    do
    {
        y = monsterAttack(y, minHit, maxHit);
    
        cout << "choose an option: "<< endl;
        cout << "1) Attack"<<endl;
        cout << "2) flee"<<endl ;
       
        cin >> choice;
                 
   while ( choice < 1 || choice > 2)
                    
    {
        cout << "try again" << endl;
        cout << " repeat choose an attack: "<< endl;
        cout << "1) Attack"<<endl;
        cout << "2) flee"<<endl ;
        
       cin >> choice;           
    }
      
    if (choice == 1)
    {
    attack  = userPower ( power);
        
        
    if (attack == 1)
    {
        hit = 200;
        mHp = mHp - hit;      
         cout << "the attack was a punch leaving the monster with "<< mHp << " of HP " << endl;
    }
    else if (attack == 2)
    {
        hit = 400;
        mHp = mHp - hit;
        cout << "the attack was a kick leaving the monster with "<< mHp << " of HP " << endl;
    }
    
    else if (attack == 3)
    {
        hit = 600;
        mHp = mHp - hit;
        cout << "the attack was a powerful mega blast leaving the monster with "<< mHp << " of HP " << endl;
    }
               
    if (y >= 500)
    {
        hp = hp - y;  
        cout << "POW!! The monster attacks removing " << y << " of your health points which is a critical hit! and now you have "<< hp << " HP" << endl;
    }
    
    else if ( mHp > 1)
    {
        hp = hp - y;
        cout << "The monster attacks removing " << y << " of your health points and now you have "<< hp << " HP" << endl;
    }     
     
    else 
        cout << "Bahamut is defeated!" << endl;
           cout << name << " opens Bahamut's stomach to remove the flash drive" << endl;
    }
        
    else 
    {
        cout << "As you are running away, the monster flies behind you and stabs you with his claws removing your heart and remaining HP" << endl;
               
        hp = 0;
    }           
    cout << "Your HP is " << hp << endl;
    if (mHp <= 0 )
    {    
        cout<< " monster reaches to 0" << endl;
        cout << "The flash drive has been found and now the world is safe from Bahamut!" << endl;
    cout << endl;
    cout << "Congratulations for winning the game; here are some lottery numbers:" << endl;
        mHp == -1;
                
    }
                
    else if (hp <= 0 )
    {
        cout<< name << " reaches to 0, you lost" << endl;
        cout << "Although you lost the epic battle, here are some lottery numbers for good luck!" << endl;
        
        hp == -1;
                
    }
              
                
    } while ( hp > 0 && mHp > 0 ); 
         
    
}

int monsterAttack (int y, int minHit, int maxHit )
{
    y = (rand() & (maxHit - minHit + 1 )) + minHit;
    return y;
    
}

int userPower ( int attack)
{
    attack = rand()%3;
    
    return attack;
}
