#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n,s; cin>>n>>s;
        vector<int>arr(n);
        vector<int>help(n);
        help[0]=arr[0];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if (i==0) help[i]=arr[i];
            else help[i]=help[i-1]+arr[i];
        }
        int ans=1e18;
        for(int i=0;i<n;i++){
            int l=i,r=n-1,p=-1;
            while(l<=r){
                int mid=l+(r-l)/2;
                int sum;
                if(i) sum=help[mid]-help[i-1];
                else sum=help[mid];
                if(sum<=s){
                    p=mid;
                    l=mid+1;
                }else{
                    r=mid-1;
                }
            }
            if(p==-1)continue;
            int sum;
            if(i) sum=help[p]-help[i-1];
            else sum=help[p];
            if(sum==s){
                ans=min(ans,n-(p-i+1));
            }
        }
        if(ans!=1e18)cout<<ans<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}