#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int ans =1;
    int MOD=1e9+7;
    while(t--){
        ans=(ans*2)%MOD;
    }
    cout<<ans<<endl;
}