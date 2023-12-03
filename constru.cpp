#include<iostream>
using namespace std;
class test{
    private:
    int n;
     
     public:
     test(){
        cout<<"Constructor is called ...."<<endl;
        n = 0;
     }
     void display(){
        cout<<" n :"<<n<<endl;
     }
};
int main(){
    test t;
    t.display();
    return 0;   
}