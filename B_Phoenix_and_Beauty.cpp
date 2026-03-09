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
        vector<int>a(n);
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        if(mp.size()>k){
            cout<<-1<<endl;
        }else{
            vector<int>ans;
            unordered_set<int>s;
            for(int i=0;i<n;i++){
                if(s.count(a[i])==0){
                    s.insert(a[i]);
                    ans.push_back(a[i]);
                }
            }
            if(ans.size()!=k){
                for(int i=1;i<=n;i++){
                    if(s.count(i)==0){
                        s.insert(i);
                        ans.push_back(i);
                        if(ans.size()==k)break;
                    }
                }
            }
            sort(ans.begin(),ans.end());
            vector<vector<int>>help;
            for(int i=0;i<n;i++){
                vector<int>temp;
                temp.push_back(a[i]);
                for(int j=0;j<ans.size();j++){
                    if(ans[j]!=a[i]){
                        temp.push_back(ans[j]);
                    }
                }
                sort(temp.begin(),temp.end());
                help.push_back(temp);
            }
            cout<<help.size()*k<<endl;
            for(auto p:help){
                for(auto it:p){
                    cout<<it<<" ";
                }
            }
            cout<<endl;
        }
    }
    return 0;
}