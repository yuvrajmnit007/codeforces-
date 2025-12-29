#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        int A = 0, B = 0;
        for(int i = 0; i < n; ++i){
            cin >> a[i];
            A ^= a[i];
        }
        for(int i = 0; i < n; ++i){
            cin >> b[i];
            B ^= b[i];
        }
        if (A == B) {
            cout << "Tie\n";
            continue;
        }
        int r = -1; 
        for(int i = 0; i < n; ++i){
            if (a[i] != b[i]) r = i;
        }
        if (r % 2 == 0) cout << "Ajisai"<<endl; 
        else cout << "Mai"<<endl;             
    }
    return 0;
}
