#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>arr(n);
        for (int i=0;i<n;i++) {
            cin>>arr[i];
        }
        vector<int>arr2(n);
        for(int i=0;i<n;i++){
            cin>>arr2[i]; 
        }
        vector<int>help(n-1);
        for(int i=0;i<n-1;i++){
            help[i]=__gcd(arr[i],arr[i+1]);
        }
        int count=0;
        for(int i=0;i<n;i++){
            int temp;
            if(i==0){
                temp=help[0];
            }else if(i==n-1){
                temp=help[n-2];
            }else{
                int temp1=help[i-1];
                int temp2=help[i];
                temp=(temp1*temp2)/__gcd(temp1,temp2);
            }
            if(temp<arr[i]){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}