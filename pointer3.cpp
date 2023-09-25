#include<iostream>
using namespace std;
int main(){
    int x= 30;
    int *ptr=&x;
    double y=90;
    double *ptr2= &y;
    cout<<"the size of x ="<<sizeof(x)<<endl;
    cout<<"Size of y is : "<<sizeof(y)<<endl;
    cout<<ptr<<endl;

    ptr++;
    cout<<ptr;
    cout<<ptr2<<endl;
    ptr2++;
    cout<<ptr2;
    return 0;
}