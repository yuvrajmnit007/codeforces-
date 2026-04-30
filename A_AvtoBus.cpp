#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        if(n%2==1||n<4){
            cout<<-1<<endl;
            continue;
        }else{
            int mn=n/6;
            if(mn==0){
                mn++;
            }else if(n%6==4||n%6==2){
                mn++;
            }
            int mx=n/4;
            cout<<mn<<" "<<mx<<endl;
        }
    }
    return 0;
}