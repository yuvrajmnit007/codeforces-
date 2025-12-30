#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        string x="";
        string y="";
        for(int i=0;i<c-1;i++){
            x+="0";
            y+="0";
        }
        for(int i=0;i<a-c+1;i++){
            cout<<1;
        }
        cout<<x<<" ";
        cout<<1;
        for(int i=1;i<b-c+1;i++){
            cout<<0;
        }
        cout<<y<<endl;
    }
    return 0;
}