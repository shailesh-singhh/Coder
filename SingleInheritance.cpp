#include<iostream>
using namespace std;
class parent {
    private :
    int a,b;
    public:
    parent(int p1 ,int p2){
a = p1;
b = p2;
    }
    void show(){
cout<<"The first value of parent class : "<<a<<endl;
cout<<"The second class : "<<b<<endl;
    }
};
class child : public parent {
    private:
    int x,y;
    public:
    child(int p1, int p2 ,int c1,int c2): parent(p1,p2 ){

    x= c1;
    y=c2;
    }
    void display(){
        cout<<"The first value of child class :"<<x<<endl;
        cout<<"The second value of child class : "<<y<<endl;
    }

};
int main(){
    child obj(4,7,3,9);
    obj.show();
    obj.display();
}