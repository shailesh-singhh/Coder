#include<iostream>
using namespace std;
class parent{
    private:
    
    protected :
    int b;
    int a;
    public:
    int c;   
};
class child : public parent{
    public:
    void get(){
        cout<<"Enter the first value "<<endl;
        cin>>a;
        cout<<"Enter the second value "<<endl;
        cin>>b;
        cout<<"Enter the third value "<<endl;
        cin>>c;
    }
    void show(){
        cout<<"The first value is "<<a<<endl;
        cout<<"The first value is "<<b<<endl;
        cout<<"The first value is "<<c<<endl;
    }
};
int main(){
    child obj1;
    obj1.get();
    obj1.show();
    cout<<"Enter value of c in main :"<<endl;
    cin>>obj1.c;
   
}