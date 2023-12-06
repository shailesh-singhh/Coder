// Create a program that should count the nuumber of objects created in a particular class 

#include<iostream>
using namespace std;
class counter{
    private:
    static int count ;
    public:
    counter(){
        count++;
      
        countObject();
        }
    void countObject(){
        system("cls");
        cout<<"Total object created is :"<<count<<endl;
    }
};
int counter :: count = 0;
int main(){
    counter c1 ,c2 ,c3;
}
