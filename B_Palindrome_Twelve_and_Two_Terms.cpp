#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int k=n/12;
        if(n==10){
            cout<<-1<<endl;
            continue;
        }
        if(n%12!=10){
            cout<<n-k*12<<" "<<k*12<<endl;
        }else{
            cout<<22<<" "<<(k-1)*12<<endl;
        }
    }
    return 0;
}