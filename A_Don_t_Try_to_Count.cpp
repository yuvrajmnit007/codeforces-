#include <bits/stdc++.h>
using namespace std;
bool check(const string &a, const string &b){
    if (a.size() < b.size()) return false;
    return a.find(b) != string::npos;
}
int main(){
    int t; cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        string x, y;
        cin >> x >> y;
        string a = x + x;
        string b = a + a;
        string c = b + b;
        string d = c + c;
        string e = d + d;
        int ans;
        if (check(x, y)) ans = 0;
        else if (check(a, y)) ans = 1;
        else if (check(b, y)) ans = 2;
        else if (check(c, y)) ans = 3;
        else if (check(d, y)) ans = 4;
        else if (check(e, y)) ans = 5;
        else ans = -1;
        cout << ans <<endl;
    }
    return 0;
}
