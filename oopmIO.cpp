#include<iostream>
using namespace std;
class student{
    private:
    int rollno ;
    char name[30];
    public:
    void inputData(){
        cout<<"Enter the rollno. "<<endl;
        cin>>rollno;
        cout<<"Enter the name :"<<endl;
        cin>>name;
    }
    void display(){
        cout<<"The rollNO. is "<<rollno<<endl;
        cout<<"The name is :"<<name<<endl;
    }
};
int main(){
  student  t1;
  cout<<"------------------Input Data-------------"<<endl;
  t1.inputData();
  cout<<"------------------Output Data------------"<<endl;
  t1.display();


}