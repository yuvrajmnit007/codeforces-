#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int s,k,m;
        cin>>s>>k>>m;
        int temp=m/k;
        int rem=m%k;
        int up;
        if(temp%2==0){
            up=s;
        }else{
            up=min(s,k);
        }
        if(rem==0){
            cout<<up<<endl;
        }else{
            cout<<max(up-rem,0)<<endl;
        }
    }
    return 0;
}