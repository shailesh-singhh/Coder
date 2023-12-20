#include<iostream>
using namespace std;
class Counter{
private:
public:
static void show(){
    cout<<"I am static member function "<<endl;
}
};
int main(){
Counter::show();
}