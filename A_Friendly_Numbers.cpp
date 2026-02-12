#include <bits/stdc++.h>
using namespace std;
#define int long long
bool check(int n ,int i){
    int p=n+i;
    int k=n+i;
    int sum=0;
    while(p>0){
        sum+=p%10;
        p=p/10;
    }
    return sum==i;
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int p=log10(n)+1;
        int count=0;
        for(int i=1;i<=9*(p+1);i++){
            if(check(n,i)){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}