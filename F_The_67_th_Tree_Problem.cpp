#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int x,y;
        cin>>x>>y;
        int n=x+y;
        if (y<x||y<1||(n%2==0&&x<1)){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        if(n==1)continue;
        vector<pair<int,int>>arr;
        int node=2;
        if(n%2==1){
            for(int i=0;i<x;i++){
                int even=node++;
                int odd=node++;
                arr.push_back({1,even});
                arr.push_back({even,odd});
            }
            while(node<=n){
                arr.push_back({1,node++});
            }
        }else{
            for(int i=0;i<x-1;i++){
                int even=node++;
                int odd=node++;
                arr.push_back({1,even});
                arr.push_back({even,odd});
            }
            while(node<=n){
                arr.push_back({1,node++});
            }
        }
        for(auto it:arr){
           cout<<it.first<<" "<<it.second<<endl;
        }
    }
    return 0;
}