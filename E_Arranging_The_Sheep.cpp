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
        cin >> n;
        string s;
        cin >> s;
        vector<int>help(n);
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i]=='*'){
                count++;
                help[i]=count;
            }else{
                help[i]=count;
            }
        }
        int total=count;
        int mid=0;
        for(int i=0;i<n;i++){
            if(help[i]*2>=total){
                mid=i;
                break;
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(s[i]=='*'){
                ans+=abs(i-mid)-abs(help[mid]-help[i]);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}