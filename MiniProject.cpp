// Write a class player that contains attributes for the player name ;age ;team;
// Write three member function input data ,change data, and dispay data these attributed
// write a constructor  that ask for input to initisliize all attributes 

#include<iostream>
#include<string.h>
#include<cstring>
using namespace std ;
class player {
    private:
  
    int age ;
  char name[40], team[40];
    public:
  player(){
    cout<<"Enter the name of the player :"<<endl;
         cin.getline(name ,40);
        cout<<"Enter the team no."<<endl;
     cin.getline(team,40);
        cout<<"Enter the age of the player :"<<endl;
    cin>>age;     
        
  }
  void input(){
    cout<<"Enter the Player name :"<<endl;
    cin>>name;
    cout<<"Enter the team name :"<<endl;
    cin>>team;
    cout<<"Enter the  age of the player:"<<endl;
    cin>>age;
  }
  void display(){
    cout<<"The player name is : "<<name<<endl;
    cout<<"The Team name is : "<<team<<endl;
    cout<<"The age of the player is :"<<age<<endl;
  }
  void Change(char n[40] , char t[40], int newage){
  
          strcpy(name , n);
          strcpy( team ,t);
           age= newage;
  }
  };
  int main(){
    int choice;

    player obj1;
    do{
        cout<<"-----------------MAIN MENU-------------------------"<<endl;
        cout<<"1 :Input Player Data "<<endl;
        cout<<"2 : Displsy the Player Data "<<endl;
        cout<<" 3: Change the Player Data "<<endl;
        cout<<"4 : Exit"<<endl;
        cout<<"Enter Your Choice : "<<endl;
        cin>>choice;
        switch (choice){
            case 1 :obj1.input();
            break;
           case 2: obj1.display();
           break;
           case 3 : obj1.Change("Nilesh" , "India" , 18);
           break;
           case 4: exit(1);
           break;
           default:
           cout<<"You entered wrong number ."<<endl;
              }
        

  }while (1);
  
  
  
      return 0;
  };




