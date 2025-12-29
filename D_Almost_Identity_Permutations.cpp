#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll n, k;
    cin >> n >> k;
    vector<ll> help(5);
    help[0]=1;
    help[1]=0;
    help[2]=n*(n-1)/2;
    help[3]=2*n*(n-1)*(n-2)/6;
    help[4]=9*n*(n-1)*(n-2)*(n-3)/24;
    //basically 4!-(4c1+4c2+4c3+4c4) *nc4;
    ll ans = 0;
    for(int i = 0 ; i < k + 1 ; i++){
        ans += help[i];
    }
    cout << ans << endl;
    return 0;
}