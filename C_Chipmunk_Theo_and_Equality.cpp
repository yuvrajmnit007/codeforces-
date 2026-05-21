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
        for(int i=0;i<n;i++){
            cin>>arr[i];
            mn=min(mn,arr[i]);
        }
        int ans=1e18;
        vector<int>poss;
        int curr=mn;
        while(curr>1){
            if(curr%2==0){
                poss.push_back(curr);
                curr/=2;
            }else{
                poss.push_back(curr);
                curr++;
            }
        }
        if(curr==1){
            poss.push_back(1);
            poss.push_back(2);
        }
        for(auto it:poss){
            int temp=0;
            bool flag=1;
            for(auto val:arr){
                int cnt=0;
                while(val!=it){        
                    if(val%2==0){
                        val/=2;
                        cnt++;
                    }else{
                        val++;
                        cnt++;
                    }
                    if(cnt>100){
                        flag=0;
                        break;
                    }
                }
                if(!flag)break;
                temp+=cnt;
            }
            if(flag)ans=min(ans,temp);
        }
        cout<<ans<<endl;
    }
    return 0;
}