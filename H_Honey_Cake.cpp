#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int p = __gcd(a, d);
    d /= p;
    int q = __gcd(b, d);
    d /= q;
    int r = __gcd(c, d);
    d /= r;
    if(d != 1){
        cout << -1 << endl;
    } else {
        cout << p - 1 << " " << q - 1 << " " << r - 1 << endl;
    }

    return 0;
}
