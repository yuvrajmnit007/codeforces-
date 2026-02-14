#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        bool odd=true,even=true;
        if(k>n){
            cout<<"NO"<<endl;
            continue;
        }
        if((n-(k-1))%2==0||(n-(k-1))<=0){
            odd=false;
        }
        if((n-2*(k-1))%2==1||(n-2*(k-1))<=0){
            even=false;
        }
        if(!odd && !even){
            cout<<"NO"<<endl;
        }else{
            if(odd){
                cout<<"YES"<<endl;
                for(int i=0;i<k-1;i++){
                    cout<<1<<" ";
                }
                cout<<n-(k-1)<<endl;
            }else{
                cout<<"YES"<<endl;
                for(int i=0;i<k-1;i++){
                    cout<<2<<" ";
                }
                cout<<n-2*(k-1)<<endl;
            }
        }
    }
    return 0;
}