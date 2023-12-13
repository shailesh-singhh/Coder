#include<iostream>
using namespace std;
int main(){
    //---------------------------------INITIALIZING THE ARRAY----------------------------------------------//
    int n;
    int arr[n];
    cout<<"Enter the length of the array :"<<endl;
    cin>>n;
    cout<<"Enter the elements of the array :"<<endl;
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    cout<<"The Array is :"<<endl;
    for(int i=0 ;i>n;i++){
        cout<<arr[i]<<endl;
    }

    //------------------------------------REVERSIG THE ARRAY ---------------------------------------------//
    return 0;

}