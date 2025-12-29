#include<iostream>
using namespace std;
int main(){
    string a,b;
    int t;
    int m=0;
    cin>>a;
    cin>>b;
    if(a.length()==b.length()){
        t=a.length();
        for(int i=0;i<t;i++){
            if(a[i]==b[t-i-1]){
                m++;
            }
        }
        if(m==t){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}