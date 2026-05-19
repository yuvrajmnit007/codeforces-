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
        string st;
        cin>>st;
        //map<string,int>mp;
        // set<string>vec;
        int ans=0;
        for(int i=2;i<n;i++){
            if(st[i]==st[i-2])ans++;
        }
        // sort(vec.begin(),vec.end());
        // int ans=1;
        // int i=1;
        // while(i<vec.size()){
        //     if(vec[i]!=vec[i-1]){
        //         ans++;
        //         i++;
        //     }else{
        //         while(i<vec.size()&&vec[i]==vec[i-1]){
        //             i++;
        //         }
        //     }
        // }
        cout<<n-1-ans<<endl;
    }
    return 0;
}