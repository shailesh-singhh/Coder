#include<iostream>
using namespace std;
class parent{
    public:
    void show(){
        cout<<"This is parent class show method "<<endl;
    }
};
class child : public parent{
    public: 
    void show(){
        cout<<"This is parent class show method ."<<endl;
    }
};
int main(){
    child obj;
    obj.show();
    obj.parent::show();
}