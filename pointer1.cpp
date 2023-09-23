#include<iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    int *ptrx=&x;
    int *ptry=&y;
    int result = 0;
    int *pos_result= &result;
    *pos_result = *ptrx + *ptry;
    cout<<*pos_result;
    return 0;
}