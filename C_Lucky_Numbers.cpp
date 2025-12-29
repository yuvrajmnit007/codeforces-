#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; 
    cin>>t;
    long long n=1;
    long long ans=0;
    for(int i=0;i<t;i++){
        n=n*2;
        ans+=n;
    }
    cout<<ans<<endl;
    return 0;
}