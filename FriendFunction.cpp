#include<iostream>
using namespace std;
class test {
    private: 
    int num;
    public:
    test():num(0){
   cout<<"Constructor is Called"<<endl;
    }
    friend void show(test obj1);
};
void show(test obj1){
    obj1.num = 10;
    cout<<"Acceced the variable of Class that is "<<obj1.num<<endl;
}
int main(){
    test obj1;
    show(obj1);
}