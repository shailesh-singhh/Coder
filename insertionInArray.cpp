#include<iostream>
using namespace std;
int main (){
    int n;
    int ele;
    int pos;
    cout<<"Enter th length of the array make sure it is less than 10"<<endl;

    cin>>n;
    int arr[10];
    cout<<"Enter the elements of the array :"<<endl;
    for(int i = 0; i<n ; i++){
        cin>>arr[i];

    }
    cout<<"The Entered array is :"<<endl;
    for(int i =0; i<n ;i++){
        cout<<arr[i]<<endl;
    }
    cout<<"Enter the new element to be inserted:"<<endl;
    cin>>ele;
    cout<<"Enter the positon where the element is to be added "<<endl;
    cin>>pos;
    n = n+1;
    for(int i = pos; i < n; i++){
     if(i == pos){
        arr[i]=ele;
     }
     else{
        arr[i]=arr[i++];
     }
    }
    cout<<"The new array is :"<<endl;
    for(int j = 0 ; j < n ;j++){
        cout<<arr[j]<<endl;;
    }
    return 0;
}