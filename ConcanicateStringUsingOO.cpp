#include<iostream>
#include<cstring>
using namespace std;
class String {
  private:
  char str[50];
  public:
  String(){
strcpy(str , "");
  }
  String(char s[]){
    strcpy(str ,s);
  }
  String operator+(String obj){
 String temp;
if (strlen(temp.str) + strlen(obj.str) <50)
{
  strcpy(temp.str,obj.str);
  strcat(temp.str,obj.str);
}
else{
    cout<<"String OverFlow"<<endl;
    exit(1);
}
return temp;
  }
  void get(){
    cout<<"Enter the String :"<<endl;
    cin>>str;
  }
  void display(){
    cout<<str<<endl;
  }
};
int main(){
   String s1 , s2; 
   cout<<"The first String :-"<<endl;
   s1.get();
   cout<<"The second String :-"<<endl;
   s2.get();
   
   s1.display();
   s2.display();
   String con;
   con = s1 + s2;
   con.display();
}