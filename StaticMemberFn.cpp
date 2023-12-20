#include<iostream>
using namespace std;
class Counter{
    private : 
    static int count;
    public:
     Counter(){
                count++;
    }
    void show(){
        cout<<"You created  "<<count<<" Objects of the class  "<<endl;
    }
};
    int Counter:: count = 0;
int main(){
      
Counter obj1;
Counter obj2;
Counter obj3;
obj1.show();

}