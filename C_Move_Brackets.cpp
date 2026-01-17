#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int help=0;
        int ans=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                help++;
            }else{
                help--;
                if(help<0){
                    ans++;
                    help=0;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
