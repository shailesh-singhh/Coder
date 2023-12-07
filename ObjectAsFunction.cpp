
#include<iostream>
using namespace std;
class Distance{
   public:
    Distance() : km(0) , hr(0){

    }
    void get(){
        cout<<"Distance in Km "<<endl;
        cin>>km;
cout<<"Enter the Hours of Distance "<<endl;
cin>>hr;
    }
    void show(){
        cout<<"You Travelled "<<km<<" km in "<<hr<<" Hours "<<endl;
    }
    void Total(Distance pas){
        Distance d;
        d.km = km + pas.km;
        d.hr = hr +  pas.hr;
        cout<<"Total Travelled distance is  "<<d.km<<" Kilometer in "<<d.hr<<" hours";
    }
     private:
     int km, hr;
    };
    int main(){
           Distance youDis , MyDis;
           cout<<"-----------Your input of distance ---------------------"<<endl;
           youDis.get();
           youDis.show();
           cout<<"-----------My input of distance -------------------------"<<endl;
           MyDis.get();
           MyDis.show();
           cout<<"-----------TOTAL  Distance ---------------------"<<endl;
         youDis.Total(MyDis);
        return 0;
    }