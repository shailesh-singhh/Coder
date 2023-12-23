#include<iostream>
using namespace std;
class test{
    private:
    int n;
public:
test():n(0){

}
void operator ++(){
    n++;
}
void operator --(){
    n--;
}
void show(){
    cout<<"The Value of n : "<<n<<endl;
}
};
int main(){
    test obj1;
    --obj1;
    obj1.show();
    ++obj1;
    obj1.show();
    
}
