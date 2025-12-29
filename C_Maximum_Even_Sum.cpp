#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        if(b%2==1&&a%2==0){
            cout<<-1<<endl;
        }
        else if(b%2==1&&a%2==1){
            cout<<a*b+1<<endl;
        }
        else{
            long long ans=-1;
            if(a%2==0){
                ans=a+b;
            }
            if((b%2==0)&&(b%4==0||a%2==0)){
                ans=max(ans,a*b/2+2);
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}
