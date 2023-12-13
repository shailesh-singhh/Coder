#include<iostream>
using namespace std;
int main(){
    int a ; 
    int b;
    int c;
    cout<<"Enter the first number :"<<endl;
    cin>>a;
    cout<<"Enter the second number "<<endl;
    cin>>b;
    cout<<"The number before reversing :"<<a<<" And "<<b<<endl;
     c = a;
    a = b;

    b = c;
    cout<<"The number after reversing is:"<<a<<" And "<<b<<endl;

    return 0;

}