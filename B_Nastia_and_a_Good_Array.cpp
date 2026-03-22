#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>arr(n);
        int mn=1e18;
        int idx;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(mn>arr[i]){
                mn=arr[i];
                idx=i;
            }
        }
        int p=-1,q=-1;
        for(int i=mn+1;i<1e10;i++){
            if(__gcd(mn,i)==1){
                p=i;
                if(p>0)break;
            }
        }
        for(int i=p+1;i<1e10;i++){
            if(__gcd(mn,i)==1&&__gcd(p,i)==1){
                q=i;
                if(q>0)break;
            }
        }
        cout<<n-1<<endl;
        for(int i=0;i<n;i++){
            if(i%2==0&&i!=idx){
                cout<<i+1<<" "<<idx+1<<" "<<p<<" "<<mn<<endl;
            }else if(i%2==1&&i!=idx){
                cout<<i+1<<" "<<idx+1<<" "<<q<<" "<<mn<<endl;
            }
        }
    }
    return 0;
}