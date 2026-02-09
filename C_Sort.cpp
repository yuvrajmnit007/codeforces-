#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n,m;
        cin>>n>>m;
        string st1,st2;
        cin>>st1>>st2;
        vector<vector<int>>arr1(n+1,vector<int>(26,0));
        vector<vector<int>>arr2(n+1,vector<int>(26,0));
        for(int i=0;i<n;i++){
            arr1[i+1]=arr1[i];
            arr2[i+1]=arr2[i];
            arr1[i+1][st1[i]-'a']++;
            arr2[i+1][st2[i]-'a']++;
        }
        while(m--){
            int l,r;
            cin>>l>>r;
            l--;
            int count=0;
            for(int i=0;i<26;i++){
                count+=abs((arr1[r][i]-arr1[l][i])-(arr2[r][i]-arr2[l][i]));
            }
            cout<<(count)/2<<endl;
        }
    }
    return 0;
}