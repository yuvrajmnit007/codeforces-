#include <bits/stdc++.h>
using namespace std;
#define int long long
int f(int n,int num){
    while(n--){
        if(!num)return num;
        num=num>>1;
    }
    return num;
}
int c(int n,int num){
    while(n--){
        if(num<=1)return num;
        num=(num+1)>>1;
    }
    return num;
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int x,n,m;
        cin>>x>>n>>m;
        cout<<f(n,c(m,x))<<" "<<c(m,f(n,x))<<endl;
    }
    return 0;
}