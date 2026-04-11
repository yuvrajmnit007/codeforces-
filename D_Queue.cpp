#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    vector<int>arr(t);
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int count=1;
    int sum=arr[0];
    for(int i=1;i<t;i++){
        if(sum<arr[i]){
            count++;
            sum+=arr[i];
        }else{
            int j=i;
            while(j<t&&arr[j]<sum){
                j++;
            }
            if(j>=t)break;
            else {
                sum+=arr[j];
                count++;
                i=j;
            }
        }
    } 
    cout<<count<<endl;
    return 0;
}