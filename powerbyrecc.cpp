#include<iostream>
using namespace std;
int power(int p, int q){
    if(q==0)
    return 1;
    return p* power(p ,q-1);
}
int main(){  
    int result=power(2,3);
    cout<<"Power is :"<<result;
    return 0;
}