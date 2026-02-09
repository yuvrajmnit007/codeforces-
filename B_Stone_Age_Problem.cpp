#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q; cin>>n>>q;
    vector<int>arr(n);
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    // queue<pair<int,int>>help;
    // while(q--){
    //     int a;
    //     cin>>a;
    //     if(a==1){
    //         int i,x;
    //         cin>>i>>x;
    //         help.push({i,x});
    //     }else{
    //         int x;
    //         cin>>x;
    //         help=queue<pair<int,int>>();
    //         help.push({-1,x});
    //     }
    // }
    // int a=help.front().first;
    // if(a==-1){
    //     int b=help.front().second;
    //     for(int i=0;i<n;i++){
    //         arr[i]=b;
    //         help.pop();
    //     }
    // }
    // while(help.empty()){
    //     int a=help.front().first;
    //     int b=help.front().second;
    //     arr[a]=b;
    //     help.pop();
    // }
    // for(auto it:arr){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    int prev=-1;
    while(q--){
        int a;
        cin>>a;
        if(a==1){
            int i,x;
            cin>>i>>x;
            if(prev==-1){
                sum=sum-arr[i-1]+x;
                arr[i-1]=x;
            }
            else{
                sum=sum-prev+x;
                
            }
            cout<<sum<<endl;
        }else{
            int x;
            cin>>x;
            sum=n*x;
            prev=x;
            cout<<sum<<endl;
        }
    }
    return 0;
}