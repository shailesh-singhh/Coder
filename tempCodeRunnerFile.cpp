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