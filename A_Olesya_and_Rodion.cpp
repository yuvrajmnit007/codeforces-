#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    string k=1;
    for(int i=1;i<n;i++){
        k=k*10;
    }
    string p=k*10;
    for(int i=0;i<m;i++){
        if(k%m!=0 && k<p){
            k++;
        }if(k%m==0 && k<p){
            cout<<k<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}