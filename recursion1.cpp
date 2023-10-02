#include<iostream>
using namespace std;
int fact(int n){
    // base case

    if(n==1){
        return 1;
    }
    return n* fact(n-1);
     
}
int main(){
   

    int result=fact(5);
     cout<<"Factorial : "<<result<<endl;
    return 0;
}