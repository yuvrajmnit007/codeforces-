#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        bool ans = false;
        if(n > 1099){
            ans = true;
        } else {
            for(int i = 0; i * 111 <= n; i++){
                if((n - i * 111) % 11 == 0){
                    ans = true;
                    break;
                }
            }
        }
        cout << (ans ? "YES" : "NO") << endl;
    }
    return 0;
}
