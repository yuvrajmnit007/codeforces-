#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    int help[] = {2,3,5,7,6,10,14,15,21,35,30,42,70,105,210};
    while (t--) {
        long long l, r;
        cin >> l >> r;
        long long ans1 = 0, ans2 = 0;
        for (int i = 0; i < 15; i++) {
            if (i < 4 || (i >= 10 && i < 14)) {
                ans1+=(l-1)/help[i];
                ans2+=r/help[i];
            } else {
                ans1-=(l-1)/help[i];
                ans2-=r/help[i];
            }
        }
        cout<<r-l+1-ans2+ans1<<endl;
    }
    return 0;
}
