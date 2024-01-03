#include<iostream>
using namespace std;
class parent{
    public:
    void show(){
        cout<<"This is show method of parent class "<<endl;

    }
};
int main(){
    parent *ptr[5];
    for(int i= 0; i<5; i++){
        ptr[i]= new parent;
        ptr[i]->show();
    } 
}