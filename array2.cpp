#include<iostream>
using namespace std;
int main(){
int a[10];
int n ,l,r;
cout<<"Enter the length of the array :"<<" "<<endl;
cin>>n;
cout<<"Enter the elements of the array :"<<endl;
for(int i=0;i<n;i++){
    cin>>a[i];

}                                                      //--Code to print sum of elements of given arrray from a given point l to point r--//
cout<<"Enter from where we want to add :"<<endl;
cin>>l;
cout<<"Enter till the position "<<endl; 
cin>>r;
int sum=0;
for(int i=l;i<=r;i++){
   sum+=a[i];
}
cout<<sum<<endl;

    return 0;
}