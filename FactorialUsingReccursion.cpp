#include<iostream>
using namespace std;
int factorial(int n){
if(n == 0){
    return 1;
}
return n* factorial(n - 1);
}
int main(){ 
    int n;
    cout<<"Enter the number :"<<endl;
    cin>>n;
    int result = factorial(n);
    cout<<"The Factorial is "<<result<<endl;

    return 0;
    
}