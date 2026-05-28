#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    while (t--) {
        int n;
        cin>>n;
        int a,b,c,d,e,f;
        a=b=c=d=e=f=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x==4){
                a++;
            }
            if(x==8&&a>0){
                a--;
                b++;
            }
            if(x==15&&b>0){
                b--;
                c++;
            }
            if(x==16&&c>0){
                c--;
                d++;
            }
            if(x==23&&d>0){
                d--;
                e++;
            }
            if(x==42&&e>0){
                f++;
                e--;
            }
        }
        cout<<n-f*6<<endl;
    }
    return 0;
}