#include<iostream>
using namespace std;
class test{

private:
int n;
public:

void inputData(){
    cout<<"Enter Number :"<<endl;
    cin>>n;

}
void display()
{
    cout<<"The number obtained is :"<<n<<endl;
}
};
int main(){
    test t;
    t.inputData();
    t.display();
    // cout<<"The number is: "<<n<<endl;
    return 0;
}
