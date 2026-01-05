#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        n--;
        int p=log2(n);
        int num=pow(2,p)-1;
        vector<int>ans;
        while(num>=0){
            ans.push_back(num);
            num--;
        }
        num=pow(2,p);
        while(num<=n){
            ans.push_back(num);
            num++;
        }
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}