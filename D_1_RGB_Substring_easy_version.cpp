#include<bits/stdc++.h>
using namespace std;        
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string st,q;
        cin>>st;
        q="RGB";
        int ans=INT_MAX;
        for(int i=0;i<=n-k;i++){
            for(int j=0;j<3;j++){
                int count=0;
                for(int r=0;r<k;r++){
                    if(st[i+r]!=q[(r+j)%3]){
                        count++;
                    }
                }
                ans=min(ans,count);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}