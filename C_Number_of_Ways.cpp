#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n; cin>>n;
    vector<int>arr(n);
    vector<int>help(n);
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    if(sum%3==0){
        sum=sum/3;
        int sum1=0;
        for(int i=n-1;i>=0;i--){
            sum1+=arr[i];
            if(sum1==sum){
                help[i]=1;
            }
        }
        for(int i=n-2;i>=0;i--){
            help[i]+=help[i+1];
        }
        int sum2=0;
        int ans=0;
        for(int i=0;i<n-2;i++){
            sum2+=arr[i];
            if(sum2==sum){ 
                ans+=help[i+2];
            }
        }
        cout<<ans<<endl;
    }else{
        cout<<0<<endl;
    }
    return 0;
}