#include<iostream>
#include<vector>
using namespace std;
int main(){
/*
    int a[]={2,3,1,5,4};
    int small=INT16_MIN;
    int large=INT16_MAX;
    int sum=0;
    for(int i=0;i<5;i++){
        if(small>=a[i]){
            small=a[i];
        }
        return small;
    }
    for(int i=0;i<5;i++){
        if(large<=a[i]){
            large=a[i];
        }
        return large;
    }
    sum= small+large;
    cout<<sum;
    return 0; */

    int array[10];
    int n;
    cout<<"Enter the size of the array :"<<" ";
    cin>>n;
    cout<<"Enter the elements of the array :"<<endl;
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<"The reverse order is :"<<" ";
    for(int i=n;i>=0;i--){
        cout<<array[n];
    }
    return 0;
    }