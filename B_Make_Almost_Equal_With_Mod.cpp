#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        long long ans=0;
        for(int i=0;i<61;i++){
            set<long long>help;
            long long k=1LL<<i;
            for(int j=0;j<n;j++){
                help.insert(arr[j]%k);
            }
            if(help.size()==2){
                ans=k;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}