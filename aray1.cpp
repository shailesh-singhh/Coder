#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :"<<" ";
   cin>>n;
   //  if(n>5){
     //    cout<<"Greater than 5 ."<<endl;                 //--CODE TO CHECK A NUMBER GREATER THAN 5 or NOT--//

     //}
     //else{
       //  cout<<"Not Greater than 5 .";
     //}
//--------------------------------------------------------------------------------------------------------------------------//   
  // if(n%2==0){
   //     cout<<"Even";
   // }                                                 //----   Code to check Even and odd --//
   // else{
     //   cout<<"ODD";
   // }
   //------------------------------------------------------------------------------------------------------------------------//
  // for(int i=1;i<=n;i++){
  //  cout<<i<<endl ;          //--Code to print n natural numbers---//
  // }
  //-----------------------------------------------------------------------------------------------------------------------//
 // for(int i=1;i<=n;i++){
 //   if(i%2==0){                         //---Code to print n even natural number -----//
   //     cout<<i<<endl;
    //}
  //}
  //-----------------------------------------------------------------------------------------------------------------------//
 // for(int i=0;i<=n;i++){
   // if(i%2==1){
     //   cout<<i<<endl;                 //---Code to print n odd natural number --//
   // }
 // }
  //-------------------------------------------------------------------------------------------------------------------------//
 // int m,sum=0;
 // cout<<"Enter the second number :"<<" ";
  //cin>>m;
 // sum=m+n;
//  cout<<sum;
int i=n;
do
{
      cout<<i<<endl;
      i--;
} while (i>=1);

   return 0;
}