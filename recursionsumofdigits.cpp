#include<iostream>
using namespace std ;
int sum(int n){
    if(n>=0 and n<=9)
    return n;
    return  sum(n/10) +(n%10);
}
int main(){
    int result = sum(1234);
    cout<<result;
    return 0;
}