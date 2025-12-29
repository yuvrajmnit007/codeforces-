#include <bits/stdc++.h>
using namespace std;
int main() {
    long long MOD = 1e9 + 7;
    int n;
    cin >> n;
    long long atd =1;  
    long long notatd = 0;
    for (int i = 1; i <= n; i++) {
        long long temp1 = notatd % MOD;
        long long temp2 = (3*atd + 2*notatd) % MOD;
        atd=temp1;
        notatd=temp2;
    }
    cout <<atd<<endl;
    return 0;
}
