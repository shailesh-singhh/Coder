#include<iostream>
using namespace std;
int main(){
    int a[5]={1,2,3,4,45};
    int* ptr=&a[0];
    cout<<ptr<<"  "<<a<< " "<<*ptr<<"  "<<*a<<endl; //both will return same valaue 
    return 0;
}