#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int>a(2*n), b(2*n), c(2*n);
        for(int i=0;i<n;i++){
            cin >> a[i];
            a[i+n] = a[i];
        }
        for(int i=0;i<n;i++){
            cin >> b[i];
            b[i+n] = b[i];
        }
        for(int i=0;i<n;i++){
            cin >> c[i];
            c[i+n] = c[i];
        }
        vector<long long> cntAB(n,0), cntBC(n,0);
        for(int i=0;i<n;i++){
            int j = 0;
            for(int k=0;k<n;k++){
                while(j < n && a[i+j] < b[k+j]) j++;
                if(j == n) cntAB[k]++;
                else break;
            }
        }
        for(int j=0;j<n;j++){
            int k = 0;
            for(int t=0;t<n;t++){
                while(k < n && b[j+k] < c[t+k]) k++;
                if(k == n) cntBC[j]++;
                else break;
            }
        }
        long long ans = 0;
        for(int j=0;j<n;j++){
            ans += cntAB[j] * cntBC[j];
        }
        cout << ans << "\n";
    }
    return 0;
}
