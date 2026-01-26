#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++) cin >> p[i];
        vector<int> help1(n), help2(n);
        help1[n-1] = p[n-1];
        help2[n-1] =n-1;
        for (int i=n-2;i>= 0;i--) {
            if (p[i]>help1[i+1]) {
                help1[i]=p[i];
                help2[i]=i;
            } else {
                help1[i] = help1[i+1];
                help2[i] = help2[i+1];
            }
        }
        for (int i = 0; i < n - 1; i++) {
            if(help1[i+1]>p[i]) {
                int l=i;
                int r=help2[i+1];
                reverse(p.begin()+l,p.begin()+r+1);
                break;
            }
        }
        for (int x : p) cout << x << " ";
        cout <<endl;
    }
    return 0;
}
