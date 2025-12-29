#include <bits/stdc++.h>
using namespace std;
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        vector<long long> arr(n);
        for (long long i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        vector<long long>help(n);
        help[0]=arr[0];
        long long ans=0;
        for(long long i=1;i<n;i++){
            help[i]=arr[i]+help[i-1];
        }
        for(long long i=0;i<=k;i++){
            long long j=k-i;
            long long p=2*i;
            long long q=n-j-1;
            long long r=0;
            if(p==0)r=help[q];
            else{
                r=help[q]-help[p-1];
            }
            ans=max(ans,r);
        }
        cout<<ans<<endl;
    }
    return 0;
}