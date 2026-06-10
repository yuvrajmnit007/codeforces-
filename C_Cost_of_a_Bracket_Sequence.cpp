#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<int>ans;
        int best=1e18;
        for(int i=0;i<=k;i++){
            int l=i,r=k-i;
            string a;
            vector<int>cur(n,0);
            for(int j=0;j<n;j++){
                if(s[j]=='('&&l>0){
                    cur[j]=1;
                    l--;
                }
            }
            for(int j=n-1;j>=0;j--){
                if(s[j]==')'&&r){
                    cur[j]=1;
                    r--;
                }
            }
            for(int i=0;i<n;i++){
                if(cur[i]==0){
                    a+=s[i];
                }
            }
            int bal=0,temp=0;
            for(auto it:a){
                if(it=='('){
                    bal++;
                }else{
                    if(bal>0){
                        bal--;
                        temp++;
                    }
                }
            }
            if(2*temp<best){
                best=2*temp;
                ans=cur;
            }
        }
        for(auto it:ans){
            cout<<it;
        }
        cout<<endl;
    }
    return 0;
}