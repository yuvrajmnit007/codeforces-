#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int a,n;
        cin>>a>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        string s=to_string(a);
        int sz=s.size();
        int ans=4e18;
        int b1,b2;
        if(sz>1){
            b1=0;
            for(int i=0;i<sz-1;i++){
                b1*=10;
                b1+=(arr[n-1]);
            }
            ans=min(ans,abs(a-b1));
        }
        b2=arr[0];
        if(b2==0)b2=arr[1];
        for(int i=0;i<sz;i++){
            b2*=10;
            b2+=arr[0];
        }
        ans=min(ans,abs(a-b2));
        int curr= 0;
        bool b=1;
        int i=0;
        for(int i=0;i<sz;i++){
            int dig=s[i]-'0';
            for(auto x:arr){
                if(x>dig){
                    int tryy=curr*10+x;
                    for(int j=i+1;j<sz;j++){
                        tryy*=10;
                        tryy+=arr[0];
                    }
                    ans=min(ans,abs(a-tryy)*1LL);
                }else if(x<dig){
                    int tryy=curr*10+x;
                    for(int j=i+1;j<sz;j++){
                        tryy*=10;
                        tryy+=arr[n-1];
                    }
                    ans=min(ans,abs(a-tryy)*1LL);
                }
            }
            bool bb=0;
            for(auto x:arr){
                if(x==dig)bb=1;
            }
            if(!bb){
                b=0;
                break;  
            }
            curr=curr*10+ dig;
        }
        if(b)ans=0;
        cout<<ans<<endl;
    }
    return 0;
}