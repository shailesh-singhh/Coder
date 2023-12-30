#include<iostream>
using namespace std;
class Parent{
    private:
    
    protected:
    int n1;
    int n2;
    public:
    void show(){
        cout<<"The value of n1 :"<<n1<<endl;
        cout<<"The value of n2 :"<<n2<<endl;
    }
};
class Child:public Parent{
public:
void input(){
    cout<<"Enter first value :"<<endl;
    cin>>n1;
    cout<<"Enter the second value :"<<endl;
    cin>>n2;
}
};
int main(){
    Child obj1;
    obj1.input();
    obj1.show();
}