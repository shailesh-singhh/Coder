#include<iostream>
using namespace std;
int main(){
int a[10];
int n;
cout<<"Enter the number of elements  to be added :"<<endl;
cin>>n;
cout<<"Enter the numbers :-"<<endl;
for(int i = 0; i<n ;i++){
    cin>>a[i];
}
cout<<"Displaying hte numbers:"<<endl;
for(int i =0 ; i<n ; i++){
    cout<<a[i]<<endl;
};
int sum = 0;
for(int i = 0 ; i<n ; i++){
    sum = sum + a[i];
}
cout<<"The sum of the arrays is :"<< sum <<endl;

    return 0;
}