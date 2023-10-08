#include<iostream>
using namespace std;
void f(int *arr,int idx ,int n){
    if(idx==n) return ;             //base case
    cout<<arr[idx]<<"\n";          //Self work
    f(arr , idx+1, n);              //assumption
}
int main(){
    int n=5;
    int arr[]={6,1,9,3,2};
    f(arr,0,n);
    return 0;

}