#include<iostream>
#include<string>

using namespace std;
// class test{
//     private:
//     int n = 10;
//     public:
//     void show(){
//         cout<<"The value of N is :"<<n<<endl;
//     }
// };
// int main(){
//     test obj1 ,t2;  //Declaring object;

//     obj1.show();
//     t2.show();

//}

class student {
    private:
    int rollno ;
    public :
 void show( int rollno ,char name[30]){
    cout<<"The rollno is :"<<rollno<<endl;
    cout<<"The name is :"<<name<<endl;
 }
};
// void student::   show( int rollno){
//         cout<<"The rollno is :"<<rollno;
//     }
int main(){
student s1;
//int rno;
// cout<<"Please Enter your rollno. ";
// cin>>rno;
// s1.show(rno);
s1.show(184 ,"Shailesh");
return 0;
}