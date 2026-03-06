#include <bits/stdc++.h>
using namespace std;
#define int long long
void factors(int n,vector<int>&a){
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            a.push_back(i);
            n/=i;
        }
    }
    if(n>1)a.push_back(n);
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t=1;
    while (t--) {
        int n,m;
        cin>>n>>m;
        vector<int>a;
        factors(m,a);
        int ans=1;
        int count=0;
        for(int i=0;i<a.size();i++){
            if(a[i]!=2)ans*=a[i];
            else count++;
        }
        if(ans<=n){
            cout<<n-ans+count<<endl;
        }else{
            int count2=0;
            while(n<m){
                n*=2;
                count2++;
            }
            cout<<count2+n-m<<endl;
        }
    }
    return 0;
}