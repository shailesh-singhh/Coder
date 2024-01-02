#include<iostream>
using namespace std;
class person{
    private:
    char name[40];
    char gender[40];
    int age;
    public:
    void getValue(){
        cout<<"Enter Name :";
        gets(name);
        cout<<"Enter the Age : ";
        cin>>age;
        cout<<"Enter the gender :"<<endl;
        cin>>gender;
    }
 void display(){
    cout<<"Name : "<<name<<endl;
    cout<<"Age : "<<age<<endl;
    cout<<"Gender : "<<gender<<endl;
 }
};
class emp : public person{
    private: 
    float sal;
    public: 
    void getValue(){
        person::getValue();
        cout<<"Enter Salary : "<<endl;
        cin>>sal;
    }
    void display(){
        person::display();
        cout<<"Salary : "<<sal<<endl;
    }
};
class prog : public emp{
    private:
    int num;
    public:
    void getValue(){
        emp ::getValue();
        cout<<"Enter the no . of language you know : "<<endl;
        cin>>num;
    }
    void display(){
        emp::display();
        cout<<"You Know "<<num<<" Language "<<endl;
    }
};
int main(){
    prog obj1;
    obj1.getValue();
    obj1.display();
}