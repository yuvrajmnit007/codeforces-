#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    while (t--) {
        int n,m;
        cin>>n>>m;
        vector<string>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<string>ans(n);
        char p;
        for(int i=0;i<n;i++){
            if(i%2==0){
                p='B';
            }else{
                p='W';
            }
            string temp="";
            for(int j=0;j<m;j++){
                temp+=p;
                if(p=='B'){
                    p='W';
                }else{
                    p='B';
                }
            }
            ans[i]=temp;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]=='-'){
                    ans[i][j]='-';
                }
            }
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<endl;
        }
    }
    return 0;
}