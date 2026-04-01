#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<string>vec={"Drive","No","No","No","No","Yes","sdrawkcab","7"};
    int t;
    cin >> t;
    if(t>=1&&t<=8)cout<<vec[t-1]<<endl;
    return 0;
}