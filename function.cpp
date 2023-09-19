#include<iostream>
using namespace std;
int add(int num1,int num2){
    int sum = num1+num2;
    return sum;
}
int add(int num1, int num2,int num3){
    int sum=num1+num2+num3;
    return sum;
     
}
int add(float num1,float num2){
    float sum =  num1 + num2;
    return sum;
}
int main(){
   // int a=5;int b=4 ; int c=6; float d = 8.7 ,e=9.6;
     //   add(a,b);
 // cout<<add(a,b)<<endl;
 // add(a,b,c);
//  cout<<add(a,b,c)<<endl;
//  add(e,d);
  //  cout<<add(e,d)<<endl;
  cout<<add(3,4)<<endl;
  
    return 0;
}