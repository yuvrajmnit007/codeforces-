#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int ans=0;
    while(t){
        if(t&1)ans++;
        t>>=1;
    }
    cout<<ans<<endl;
    return 0;
}