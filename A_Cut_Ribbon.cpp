#include<bits/stdc++.h>
using namespace std;
int min(int a,int b,int c){
    int mn;
    if(a>=b && c>=b){
        mn=b;
    }else if(b>=a && c>=a){
        mn=a;
    }else{
        mn=c;
    }
    return mn;
}
int main(){
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    if(n%min(a,b,c)==0){
        cout<<n/min(a,b,c)<<endl;
        return 0;
    }
}