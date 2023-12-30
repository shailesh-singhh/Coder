#include<iostream>
using namespace std;
class parent{
    public:
    parent(){
        cout<<"Constructor of parent class "<<endl;
    }
    ~parent(){
cout<<"Destructor of parent class "<<endl;
    }
};
class child1 : public parent{
    public:
    child1(){
        cout<<"Constructor of child 1 class "<<endl;

    }
    ~child1(){
        cout<<"Destructor of child 1 class "<<endl;
    }
};
class child2 :public child1{
    public:
    child2(){
        cout<<"Constructor of Child 2 "<<endl;
    }
    ~child2(){
        cout<<"Dstructor of child 2 "<<endl;
    }
};
int main(){
    child2 obj;
}