#include<iostream>
using namespace std;
class Test{
    private: 
    int n;
    float n2;
    public:
    Test(){
    cout<<"Constuctor 1 is called ...."<<endl;            //Deffault Constructor
}
Test(int num){
n = num;
cout<<"Constructor 2 with the value "<<n<<" is called .."<<endl;
}
Test(float num2){
n2 = num2;
cout<<"Constructor 3 with the value "<<n2<<" is called .."<<endl;
}
Test(int num,float num2){
n = num;
n2 = num2;

cout<<"Constructor 4 with the value "<<n<<" and "<<n2<<" is called .."<<endl;
}
};
int main(){
    Test t ,t1(6) ,t3(3,6.9) ,t4(87), t5(6 , 7.8);
    
    return 0;
}