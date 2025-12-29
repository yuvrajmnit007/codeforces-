#include<bits/stdc++.h>
using namespace std;   
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        const int mod=1e9+7;
        vector<int>a(n);
        vector<int>b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        vector<int>help;
        for(int i=0,j=0;i<n;i++){
            while(j<n&&b[j]<a[i]){
                j++;
            }
            help.push_back(j);
        }
        long long ans=1;
        for(int i=0;i<n;i++){
            ans=ans*(help[i]-i)%mod;
        }
        cout<<ans<<endl;
    }
    return 0;
}