#include<iostream>
using namespace std;
class animal{
    public:
    int legs = 4;

};
class dog : public animal{
    public:
    int tail = 1;
};
int main(){
    dog d;
    cout<<"Number of legs are :"<<d.legs<<endl;
    cout<<"Number of tails :"<<d.tail<<endl;
    
}