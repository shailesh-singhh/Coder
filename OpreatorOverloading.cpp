#include<iostream>
using namespace std;
class test{
    private:
    int n;
    public:
    void getValue(){
        cout<<"Enter numbers "<<endl;
        cin>>n;
    } 
    void operator +(test obj){
        test t;
        t.n = n + obj.n;
        cout<<"The addition is : "<<t.n<<endl;
    }
    void operator - (test obj3){
        test t2;
        t2.n = n - obj3.n;
        cout<<"The Difference is : "<<t2.n<<endl;
    }
    };
int main(){
    test obj1 , obj2;
    cout<<"Enter the data of Object1 "<<endl;
   obj1.getValue();
   cout<<"Enter the data of Object 2:"<<endl;
   obj2.getValue();
   obj1+obj2;
   obj1 - obj2;
}