#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int idx = 0;
        for (int i=0;i<n;i++) {
            if (i==0||a[i]!=a[i-1]){
                b[idx++]=a[i];
            }
        }
        int ans=idx;
        for (int i =0;i<idx-2;i++) {
            if (b[i]<b[i+1]&&b[i+1]<b[i+2]) {
                ans--;
            }
            if (b[i]>b[i+1]&&b[i+1]>b[i+2]) {
                ans--;
            }
        }
        cout <<ans<< endl;
    }
    return 0;
}
