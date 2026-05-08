#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin>>s;
        int n=s.size();
        unordered_map<char,int>mp;
        for(int i=0;i<n;i++){
            mp[s[i]-'a']++;
        }
        int k=mp.size();
        unordered_map<char,int>v;
        for(int i=0;i<k;i++){
            v[s[i]-'a']++;
        }
        bool flag=true;
        for(int i=k;i<n;i++){
            if(v.size()!=k){
                flag=false;
                break;
            }
            v[s[i]-'a']++;
            v[s[i-k]-'a']--;
            if(v[s[i-k]-'a']==0){
                v.erase(s[i-k]-'a');
            }
        }
        if(v.size()!=k){
            flag=false;
        }
        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}