#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int p,q;
        if(a<b){
            p=a;
            q=b;
        }else{
            q=a;
            p=b;
        }
        int r,s;
       if(c<d){
            r=c;
            s=d;
        }else{
            r=d;
            s=c;
        }
        if((c<q && d<q) && (c>p && d>p)){
            cout<<"NO"<<endl;
        }
        else if((c<q && d<q) && (c>p && d>p)){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}