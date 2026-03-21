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
        string s1,s2;
        cin>>s1>>s2;
        int cnt1=0,cnt0=0;
        for(int i=0;i<n;i++){
            if(s1[i]=='1'){
                cnt1++;
            }else{
                cnt0++;
            }
        }
        int i=n-1;
        bool ans=true;
        while(i>=0){
            if(s1[i]==s2[i]){
                if(s1[i]=='1'){
                    cnt1--;
                }else{
                    cnt0--;
                }
            }else{
                if(cnt1==cnt0){
                    while(i>=0&&s1[i]!=s2[i]){
                        if(s1[i]=='1'){
                            cnt1--;
                        }else{
                            cnt0--;
                        }
                        i--;
                    }
                    i++;
                }else{
                    ans=false;
                    break;
                }
            }
            i--;
        }
        if(ans){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}