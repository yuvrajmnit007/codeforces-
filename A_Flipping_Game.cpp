#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int count=0;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1){
            count++;
            a[i]=-1;
        }else{
            a[i]=1;
        }
    }
    int currsum=a[0],maxsum=a[0];
    for(int i=1;i<n;i++){
        currsum=max(a[i],currsum+a[i]);
        maxsum=max(maxsum,currsum);
    }
    cout<<count+maxsum<<endl;
    return 0;
}