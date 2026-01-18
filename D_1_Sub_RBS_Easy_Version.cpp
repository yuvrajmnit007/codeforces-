#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string st;
        cin>>st;
        int ans=-1;
        int count=0;
        for(int i=n-1;i>=0;i--){
            if(st[i]==')'){
                count++;
            }else{
                if(count>=2){
                    ans=n-2;
                    break;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}