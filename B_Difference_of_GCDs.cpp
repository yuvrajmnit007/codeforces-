#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,l,r;
        cin>>n>>l>>r;
        bool found=true;
        vector<int>ans;
        for(int i=1;i<=n;i++){
            if(l%i==0){
                ans.push_back(l);
            }else{
                int p=l/i;
                int temp=i*(p+1);
                if(temp<=r){
                    ans.push_back(temp);
                }else{
                    found=false;
                    break;
                }
            }
        }
        if(!found)cout<<"NO"<<endl;
            else{
                cout<<"YES"<<endl;
                for(auto x:ans){
                    cout<<x<<" ";
                }
                cout<<endl;
            }
    }
    return 0;
}