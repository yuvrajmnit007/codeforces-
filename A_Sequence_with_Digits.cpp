#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<int> f(int temp){
    string st=to_string(temp);
    int mn=1e18;
    int mx=-1e18;
    for(int i=0;i<st.size();i++){
        int p=st[i]-'0';
        mn=min(mn,p);
        mx=max(mx,p);
    }
    return {mn,mx};
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        int temp=n;
        while(--k){
            vector<int>help=f(temp);
            int mn=help[0],mx=help[1];
            if(mn==0||mx==0){
                break;
            }
            temp+=mn*mx;
        } 
        cout<<temp<<endl;
    }
    return 0;
}