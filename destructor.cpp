 #include<iostream>
 using namespace std;
 class test{
    private: 
    int n;
    public:
    test(){
        cout<<"Constructor is called :"<<endl;

    }
    ~test(){
        cout<<"Destructor is called : "<<endl;
    }
    
 };  
 void objectCreate(){
    test t1 ,t2;
 }
 int main(){
   objectCreate();
   cout<<"Back in main "<<endl;
   system("pause");
   test t3;
   return 0;
 }