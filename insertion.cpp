#include<iostream>
using namespace std;
int main(){
    int n;
    int a[n];
    cout<<"Enter the number of element :"<<endl;
    cin>>n;
    cout<<"Enter the elements :"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"The array elements are :"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i];
    }

    return 0;
}