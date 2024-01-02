#include<iostream>
using namespace std ;
class student {
    private:
    char name[40] ,city[40];
    public:
    void input_data();
    void show_data();

};
class std_marks{
    private:
    float math , comp, phy,total,avg;
    public:
    void input_marks();
    void show_marks();
};
class result: public student , public std_marks{
    public:
    void show_result(){
    cout<<"---------------------------------"<<endl;
    cout<<"The complete Result is "<<endl;
    cout<<"----------------------------------------"<<endl;

show_data ();
show_marks();
}
 };
 void student :: input_data(){
    cout<<"Enter  Student Name : ";
    cin>>name;
    cout<<"Enter student city : ";
    cin>>city;
 };
 void student :: show_data(){
    cout<<"The name is :"<<name<<endl;
    cout<<"The city is :"<<city<<endl;
 }
 void std_marks::input_marks(){
    cout<<"Enter Computer marks: ";
    cin>>comp;
    cout<<"Enter the math marks :";
    cin>>math;
    cout<<"Enter the physics marks :";
    cin>>phy;
    total= comp+math+phy;
    avg = total/3.0;
 }
 void std_marks:: show_marks(){
    cout<<"The computer marks : "<<comp<<endl;
    cout<<"The maths marks :"<<math<<endl;
    cout<<"The physics marks : "<<phy<<endl;
    cout<<"The total marks :"<<total<<endl;
    cout<<"The average marks is :"<<avg<<endl;
 }
 int main(){
    result res;
    res.input_data();
    res.input_marks();
    res.show_result();
 }

