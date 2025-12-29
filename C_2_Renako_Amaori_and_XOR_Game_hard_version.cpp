#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n+1), b(n+1);
        long long A = 0, B = 0;
        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
            A ^= a[i];
        }
        for (int i = 1; i <= n; ++i) {
            cin >> b[i];
            B ^= b[i];
        }
        if (A == B) {
            cout << "Tie"<<endl;
            continue;
        }
        long long z = A ^ B;
        int k = 100;
        while (k >= 0 && ((z >> k) & 1) == 0) --k;
        int r = -1; 
        for (int i = 1; i <= n; ++i) {
            long long xi = a[i] ^ b[i];
            if ((xi >> k) & 1) r = i;
        }
        if (r == -1) {
            if(A>B){
                cout<<"Ajisai"<<endl;
            }else{
                cout<<"Mai"<<endl;
            }
        } else {
            if (r % 2 == 1) cout << "Ajisai"<<endl;
            else cout << "Mai"<<endl;
        }
    }
    return 0;
}
