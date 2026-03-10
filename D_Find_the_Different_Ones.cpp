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
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<int>help(n);
        help[0]=-1;
        for(int i=1;i<n;i++){
            if(arr[i]!=arr[i-1]){
                help[i]=i;
            }else{
                help[i]=help[i-1];
            }
        }
        int p;
        cin>>p;
        while(p--){
            int l,r;
            cin>>l>>r;
            l--;
            r--;
            int lo=l,hi=r;
            int pos=-1;
            int x=help[l];
            while(lo<=hi){
                int mid=lo+(hi-lo)/2;
                if(help[mid]>x){
                    pos=help[mid];
                    hi=mid-1;
                }else{
                    lo=mid+1;
                }
            }
           if(pos==-1) {
                cout<<-1<<" "<<-1<<endl;
            }else{
                cout<<pos<<" "<<pos+1<<endl;
            }
        }
    }
    return 0;
}