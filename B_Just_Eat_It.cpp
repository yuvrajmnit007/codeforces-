#include <bits/stdc++.h>
using namespace std;
#define int long long
int mx(vector<int>&a){
    int s1=0,s2=0;
    for(int i=0;i<a.size();i++){
        s1+=a[i];
        if(s1>s2){
            s2=s1;
        }
        if(s1<0){
            s1=0;
        }
    }
    return s2;
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>a(n);
        int sum=0;
        vector<int>b(n-1),c(n-1);
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
            if(i<n-1){
                c[i]=a[i];
            }
            if(i>=1){
                b[i-1]=a[i];
            }
        }

        int k=max(mx(b),mx(c));
        if(sum>k){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}