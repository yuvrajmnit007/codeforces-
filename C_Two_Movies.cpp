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
        vector<int>a(n);
        vector<int>b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int j=0;j<n;j++){
            cin>>b[j];
        }
        int fir=0,sec=0;
        int tmp1=0;
        int tmp2=0;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                if(a[i]>b[i]){
                    fir+=a[i];
                }else{
                    sec+=b[i];
                }
            }else{
                if(a[i]>0)tmp1+=a[i];
                else tmp2+=a[i];
            }
        }
        if(fir>sec){
            int diff=min(fir-sec,abs(tmp2));
            fir-=diff;
            tmp2+=diff;
        }else{
            int diff=min(sec-fir,abs(tmp2));
            sec-=diff;
            tmp2+=diff;
        }
        if(fir<sec){
            int diff=min(-fir+sec,tmp1);
            fir+=diff;
            tmp1-=diff;
        }else{
            int diff=min(-sec+fir,tmp1);
            sec+=diff;
            tmp1-=diff;
        }
        if(fir==sec){
            int net=tmp1+tmp2;
            if(net>=0){
                cout<<fir+net/2<<endl;
            }else{
                cout<<fir+(net-1)/2<<endl;
            }
        }else{
            cout<<min(fir,sec)<<endl;
        }
    }
    return 0;
}