#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>arr(n+2,0);
    for(int i=2;i<=n+1;i++){
        if(arr[i]==0){
            for(int j=2*i;j<=n+1;j+=i){
                arr[j]=1;
            }
        }
    }
    if(n<=2){
        cout<<1<<endl;
        for(int i=0;i<n;i++){
            cout<<1<<" ";
        }
        cout<<endl;
    }else{
        cout<<2<<endl;
        for(int i=2;i<=n+1;i++){
            if(arr[i]==0){
                cout<<1<<" ";
            }else{
                cout<<2<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}