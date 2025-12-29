#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while (n--){
        long long x, y, k;
        cin >> x >> y >> k;
        long long mx = (x + k - 1) / k;
        long long my = (y + k - 1) / k;

        long long ans;
        if (mx < my) {
            ans = 2 * my;
        } else {
            ans = 2 * mx - 1;
        }
        cout << ans << "\n";
    }
    return 0;
}