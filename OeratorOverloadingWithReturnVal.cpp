#include<iostream>
using namespace std;
class test{
    private:
    int n;
    public:
    test():n(0){

    }
    void get(){
        cout<<"Enter number :"<<endl;

        cin>>n;
    }
    test operator+(test obj){
        test t;
     t.n = n + obj.n;
     return t;
    }
    test operator-(test obj){
        test t;
        t.n = n - obj.n;
        return t;

    }
    test operator*(test obj){
        test t;
        t.n = n *obj.n;
        return t;
    }
    test operator/(test obj ){
        test t;
        t.n = n / obj.n;
        return t;
    }
    test operator%(test obj){
        test t;
        t.n = n %obj.n;
        return t;
    }
    int display(){
        return n;
    }
};
int main(){
    test obj1 ,obj2 ,sum,sub,div,mul,mod;
    cout<<"Enter the Value of object 1 "<<endl;
    obj1.get();
     cout<<"Enter the Value of object 2 "<<endl;
    obj2.get();
    cout<<"=============Operation==================="<<endl;
    sum=obj1+obj2;
    cout<<"Additon is :"<<sum.display()<<endl;
    sub=obj1-obj2;
    cout<<"The Subtraction is :"<<sub.display()<<endl;
     mul=obj1*obj2;
    cout<<"The Multiplication is :"<<mul.display()<<endl;
     div=obj1/obj2;
    cout<<"The Division is :"<<div.display()<<endl;
     mod=obj1%obj2;
    cout<<"The Modulus is :"<<mod.display()<<endl;
}