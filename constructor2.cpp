#include<iostream>
using namespace std;
class fact{
    public:
    int n;
    int f =1;
    void get(){
        cout<<"Enter the number :"<<endl;
        cin>>n;    
    }
    void show(){
        for(int i = 1 ; i<=n ;i++){
            f=f*i;
        }
        cout<<"The factorial of "<<n<<" is : "<<f<<endl;
    }

};
int main(){
    fact t1;
    t1.get();
    t1.show();

    return 0;
}