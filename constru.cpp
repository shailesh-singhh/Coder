#include<iostream>
using namespace std;
class test{
    private:
    int n;
     
     public:
     test(){                      //-------------------------Default Constructor-----------------------------------//
        cout<<"Constructor is called ...."<<endl;
        n = 0;
     }
     test(int num){                   //--------------------------parametrised Constructor------------------------//
      cout<<"As parameter is passed it is paramaterised constructor ."<<endl;
      n = num;
     }
     void display(){
        cout<<" n :"<<n<<endl;
     }
};
int main(){
   test t2;
    test t(20);
    t2.display();
    t.display();
    return 0;   
}