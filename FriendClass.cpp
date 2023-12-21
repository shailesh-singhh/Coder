#include<iostream>
using namespace std;
class A{
    private:
    int a;
    protected:
    int b;
    public :
    friend class B;
};
class B{
    public:

    void input(A obj1){
            cout<<"Enter the first number :"<<endl;
            cin>>obj1.a;
            cout<<"Enter the second number :"<<endl;
            cin>>obj1.b;
            sum(obj1);
    }
    void sum(A obj1){
        int res;
        res = obj1.a +obj1.b;
        cout<<"The result is "<<res<<endl;
    }
};
int main(){
    A obj1;
    B obj2;
    obj2.input(obj1);

}

    