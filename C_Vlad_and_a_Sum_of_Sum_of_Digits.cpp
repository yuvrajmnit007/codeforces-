#include <bits/stdc++.h>
using namespace std;
#define int long long
int find_sum(int n){
    int ans=0;
    while(n>0){
        int p=n%10;
        ans+=p;
        n/=10;
    }
    return ans;
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    vector<int>help(1000001,0);
    for(int i=1;i<=1000000;i++){
        help[i]=help[i-1]+find_sum(i);
    }
    while (t--) {
        int n;
        cin>>n;
        cout<<help[n]<<endl;
    }
    return 0;
}