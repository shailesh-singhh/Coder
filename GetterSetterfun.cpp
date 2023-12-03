#include<iostream>
#include<string>
using namespace std;
class Book{
    private:
    int page;
    float price ;
    char name[40];
    public:
    void setPage(int p){
        page = p;}
        void setPrice(float pr){
            price = pr;
        }
        // void setName(char *n){
        //   strcpy(name , n);
        // }
        void display(){
            cout<<"The page is :"<<page<<endl;
            cout<<"The price is :"<<price<<endl;
            cout<<"The name is :"<<name<<endl;
        }
};
int main(){
    Book b1;
    cout<<"--------------Book1 Data-------------------"<<endl;
    b1.setPage(100);
    b1.setPage(500);
    // b1.setName("R.D_Sharama");
    cout<<"------------Book1 Information-------------------------"<<endl;
    b1.display();
    return 0;
}