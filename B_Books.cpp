#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    vector<int>books(n);
    for(int i=0;i<n;i++){
        cin>>books[i];
    }
    int ans=0,sum=0,r=0;
    for(int l=0;l<n;l++){
        while(r<n&&sum+books[r]<=t){
            sum+=books[r];
            r++;
        }
        sum-=books[l];
        ans=max(ans,r-l);
    }
    cout<<ans<<endl;
    return 0;
}
