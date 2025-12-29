#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int ans=30;
    int p=0,q=0,r=0;
    if(a>0)p=(max(0,a-2+1)/2)*3;
    if(b>0)q=1+(max(0,b-2+1)/2)*3;
    if(c>0)r=2+(max(0,c-2+1)/2)*3;
    ans+=max(p,max(q,r));
    cout<<ans<<endl;
    return 0;
}