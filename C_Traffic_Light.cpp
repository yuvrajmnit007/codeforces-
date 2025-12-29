#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        char c;
        string st;
        cin>>n>>c>>st;
        if(c=='g'){
            cout<<0<<endl;
            continue;
        }
        string p=st+st;
        int ans=0; 
        int next=-1;
        for(int i=2*n-1;i>=0;--i){
            if(p[i]=='g'){
                next=i;
            }
            if(p[i]==c && next!=-1 && i<n){
                ans=max(ans,next-i);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}