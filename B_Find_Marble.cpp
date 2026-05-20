#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,s,t;
    cin>>n>>s>>t;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0;
    int curr=s;
    bool ans=false;
    while(i<n){
        if(curr==t){
            cout<<i<<endl;
            ans=true;
            break;
        }
        curr=arr[curr-1];
        i++;
    }
    if(!ans)cout<<-1<<endl;
    return 0;
}