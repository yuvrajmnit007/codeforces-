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
        vector<int>a(n);
        vector<int>b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int j=0;j<n;j++){
            cin>>b[j];
        }
        int tmp1=0,tmp2=0;
        for(int i=0;i<n;i++){
            if(a[i]<0&&b[i]<0){
                if(tmp2>tmp1){
                    tmp2+=b[i];
                }else{
                    tmp1+=a[i];
                }
            }else if(b[i]>0&&a[i]>0){
                if(tmp2>tmp1){
                    tmp1+=a[i];
                }else{
                    tmp2+=b[i];
                }
            }else{
                if(a[i]>=0){
                    tmp1+=a[i];
                }else{
                    tmp2+=b[i];
                }
            }
        }
        int tmp3=0,tmp4=0;
        for(int i=0;i<n;i++){
            if(a[i]<0&&b[i]<0){
                if(tmp2>tmp1){
                    tmp4+=b[i];
                }else{
                    tmp3+=a[i];
                }
            }else if(b[i]>0&&a[i]>0){
                if(tmp2>tmp1){
                    tmp3+=a[i];
                }else{
                    tmp4+=b[i];
                }
            }else{
                if(a[i]>=0){
                    tmp3+=a[i];
                }else{
                    tmp4+=b[i];
                }
            }
        }
        int ans1=min(tmp1,tmp2);
        int ans2=min(tmp3,tmp4);
        int ans=max(ans1,ans2);
        cout<<ans<<endl;
    }
    return 0;
}