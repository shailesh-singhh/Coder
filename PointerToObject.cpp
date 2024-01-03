#include<iostream>
using namespace std;
class parent {
    public:
    void show(){
        cout<<"This is a show method of parent class "<<endl;

    }

};
int main(){
    parent *ptr;
    ptr = new parent;
    ptr->show(); 
} 