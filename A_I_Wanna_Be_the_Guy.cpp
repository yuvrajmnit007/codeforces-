#include<iostream>
#include<set>
using namespace std;
int main(){
    int n,p,t;
    int x=2;
    set <int> myset;
    cin>>n;
    while(x--){
        cin>>p;
        for(int i=0;i<p;i++){
            cin>>t;
            myset.insert(t);
        }
    }
    if(myset.size()==n){
        cout<<"I become the guy."<<endl;
    }else{
        cout<<"Oh, my keyboard!"<<endl;
    }
    return 0;
}