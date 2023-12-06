#include<iostream>
using namespace std;
class test{
    private:
    int n;
    public:
    test (): n(0){
        cout<<"Consturctor is called ...."<<endl;

    }
    void setVal(int num){
        n = num;
    }
    int getVal(){
        return n;
    }
    ~test(){
        cout<<"destructor is called ...."<<endl;
    }
};