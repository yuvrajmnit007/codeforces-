#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q; 
    cin>>n>>q;
    vector<int>arr(n);
    vector<int>help(n,0);
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    int prev=-1;
    int temp=0;
    int temp1=0;
    while(q--){
        temp1++;
        int a;
        cin>>a;
        if(a==1){
            int i,x;
            cin>>i>>x;
            int val;
            if(help[i-1]>temp||prev==-1){
                val=arr[i-1];
            } else {
                val=prev;
            }
            sum=sum-val+x;
            arr[i-1]=x;
            help[i-1]=temp1;
            cout<<sum<<endl;
        }else{
            int x;
            cin>>x;
            sum=n*x;
            prev=x;
            temp=temp1;
            cout<<sum<<endl;
        }
    }
    return 0;
}