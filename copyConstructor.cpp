#include<iostream>
using namespace std;
class Student{
    private:
    int rollno;
    char name[40];
    int marks;
public:
void get(){
    cout<<"Enter Rollno. "<<endl;
    cin>>rollno;
    cout<<"Enter the name :"<<endl;
    cin.ignore();
    cin.getline(name , 40);
    cout<<"Enter the Marks :"<<endl;
   cin>>marks;
}
void show(){
    cout<<"The Roll No. : "<<rollno<<endl;
    cout<<"The Name is : "<<name<<endl;
    cout<<"The marks is : "<<marks<<endl;
}
};
int main(){
    Student s1 ,s2;
    s1.get();
    cout<<"------------Student1 Output --------------"<<endl;
    s1.show();
    s2 = s1;
    cout<<"-------------Student2 Output---------------"<<endl;
    s2.show();


return 0;
    }