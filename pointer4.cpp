#include<iostream>
using namespace std;
int main(){
    int arr[3]={3,5,6,};
    int *ptr=&arr[0];
    cout<<*++ptr<<endl;
    cout<<(*ptr)++<<endl;
    cout<<*ptr<<endl;
    return 0;
}