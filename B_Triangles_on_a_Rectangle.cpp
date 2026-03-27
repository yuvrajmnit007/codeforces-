#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int w,h;
        cin>>w>>h;
        int a;
        cin>>a;
        vector<int>v1(a);
        for(int i=0;i<a;i++){
            cin>>v1[i];
        }
        int b;
        cin>>b;
        vector<int>v2(b);
        for(int i=0;i<b;i++){
            cin>>v2[i];
        }
        int c;
        cin>>c;
        vector<int>v3(c);
        for(int i=0;i<c;i++){
            cin>>v3[i];
        }
        int d;
        cin>>d;
        vector<int>v4(d);
        for(int i=0;i<d;i++){
            cin>>v4[i];
        }
        int l1=max(abs(v1[0]-v1[a-1]),abs(v2[0]-v2[b-1]));
        int l2=max(abs(v4[0]-v4[d-1]),abs(v3[0]-v3[c-1]));
        cout<<max(l1*h,l2*w)<<endl;
    }
    return 0;
}