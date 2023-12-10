#include<iostream>
using namespace std;
int main(){
      int arr[4][4];
      cout<<"Enter the Elements :"<<endl;
      for(int i = 0; i<4 ;i++ ){
           for(int j= 0; j<4 ;i++){
            cin>>arr[i][j];
           }
      }
      cout<<"The Elements are :"<<endl;
            for(int i = 0; i<4 ;i++ ){
           for(int j= 0; j<4 ;i++){
            cout<<arr[j];
           }
      }

    return 0;
}
