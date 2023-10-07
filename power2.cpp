#include<iostream>
using namespace std;
int power(int p,int q){
    if(q==0) return 1;     //base case
    if(q%2==0){                // if q is even
int result = power(p,q/2);
return result*result;
    }
   else{
    int result= p*power(p,(q-1)/2); 
    return result*result;         // if q is odd
   } 
}
int main(){
    int res = power(2,3);
    cout<<"power is: "<<res;
    return 0;
}