#include <bits/stdc++.h>
using namespace std;
long long count_layers(long long a, long long b, bool start_white) {
    long long layers = 0;
    long long size = 1;
    bool white = start_white;
    while(true) {
        if (white) {
            if (a < size) break;
            a -= size;
        } else {
            if (b < size) break;
            b -= size;
        }
        layers++;
        size *= 2;
        white = !white;
    }
    return layers;
}
int main() {
    int t;
    cin>>t;
    while(t--){
    long long a, b;
    cin >> a >> b;
    long long ans = max(count_layers(a, b, true),count_layers(a, b, false));
    cout << ans << endl;    
    }
    return 0;
}
