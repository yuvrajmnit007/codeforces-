#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=0;
    vector<int>help(n+1,0);
    for(int i=2;i<=n;i++){
        if(help[i]==0){
            int j=i;
            while(j<=n){
                help[j]++;
                j=j+i;
            }
        }
    }
    for(int i=0;i<=n;i++){
        if(help[i]==2){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}