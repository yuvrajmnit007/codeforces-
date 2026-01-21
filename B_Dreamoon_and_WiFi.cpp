#include <bits/stdc++.h>
using namespace std;
long long fact(int n) {
    long long res = 1;
    for (int i = 1; i <= n; i++) {
        res *= i;
    }
    return res;
}
int main() {
    string s1, s2;
    cin >> s1 >> s2;
    int p1 = 0, p2 = 0, m1 = 0, m2 = 0, u = 0;
    for (char c : s1) {
        if (c == '+') p1++;
        else m1++;
    }
    for (char c : s2) {
        if (c == '+') p2++;
        else if (c == '-') m2++;
        else u++;
    }
    if (p2 > p1 || m2 > m1) {
        cout <<fixed<<setprecision(12)<<0.0<< endl;
    } else {
        double ans =(double)fact(u)/(fact(p1-p2)*fact(m1-m2))/pow(2,u);
        cout <<fixed<<setprecision(12)<<ans<<endl;
    }
    return 0;
}
