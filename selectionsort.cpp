#include<iostream>
#include<vector>
using namespace std;
void selectionsort(vector<int> &v){
    int n = v.size();
    for(int i =0;i<n-1;i++){
        int min_inx=i;
        for(int j=i+1;j<n;j++){
            if(v[j]<v[min_inx]){
                min_inx=j;
            }
           
        }
         if(i!=min_inx){
                swap(v[i],v[min_inx]);
            }
    }
    return;
}
int main(){
int n;
cin>>n;
vector<int> v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
selectionsort(v);
for(int i =0;i<n;i++){
    cout<<v[i]<<" ";
}cout<<endl;

} 