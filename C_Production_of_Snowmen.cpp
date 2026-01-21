#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(2*n);
        vector<int>b(2*n);
        vector<int>c(2*n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            a[i+n]=a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            b[i+n]=b[i];
        }
        for(int i=0;i<n;i++){
            cin>>c[i];
            c[i+n]=c[i];
        }
        vector<int>ab;
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<n;j++){
                if(a[i]<b[i]){
                    count++;
                }
            }
            ab.push_back(count);
        }
        vector<int>bc;
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<n;j++){
                if(b[i]<c[i]){
                    count++;
                }
            }
            bc.push_back(count);
        }
        long long ans=0;
        for(int i=0;i<n;i++){
            ans+=ab[i]*bc[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}
