#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        long long prev1 = -arr[n-1];
        long long prev = arr[n-1];
        long long ans = 0;
        for(int i = n-2; i >= 0; i--){
            long long nottake = arr[i];
            long long take = prev1 + max(0LL, nottake + prev);
            prev1 -= nottake;
            prev = max(prev, take - prev1);
            if(i == 0) ans = take;
        }
        cout << ans << "\n";
    }
    return 0;
}
