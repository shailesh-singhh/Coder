#include<iostream>
using namespace std;
int power(int n ,int m){
    int pow = n;
    for(int i=1;i<m;i++){
       pow=pow*n;
    }
    return pow;
}
int main(){
    int n;
    int m;
    cout<<"Enter the number :"<<endl;
    cin>>n;
    cout<<"Enter the power :"<<endl;
    cin>>m;
    cout<<"The power of "<<n<<" Raised to power "<<m<<" :"<<power(n,m);
    return 0;
}