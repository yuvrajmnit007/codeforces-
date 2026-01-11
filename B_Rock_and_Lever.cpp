#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        vector<int>freq(32,0);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            int p=log2(arr[i]);
            freq[p]++;
        }
        long long ans=0;
        for(int i=0;i<32;i++){
            if(freq[i]>1){
                ans+=((long long)freq[i]*(freq[i]-1))/2;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}