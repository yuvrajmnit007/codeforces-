#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; 
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        int cnt=0;
        int help=0;
        int cnt2=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2==0)cnt++;
            if(arr[i]%4==3)help++;
            if(arr[i]%4==0)cnt2++;
        }
        int ans=k;
        int ans1;
        if(k==4){
            if(cnt2>=1)ans1=0;
            else if (help>=1&&cnt==0) ans1=1;
            else ans1=max(0,2-cnt);
            cout<<ans1<<endl;
        }else{
            for(int i=0;i<n;i++){
                int rem=arr[i]%k;
                if(rem==0){
                    ans=0;
                    break;
                }else{
                    ans=min(ans,k-rem);
                }
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}