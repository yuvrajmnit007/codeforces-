#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >>n;
        int a,b,c,d;
        cin >>a>>b>>c>>d;
        vector<int>arr(n);
        int sum=0;
        for (int i=0;i<n;i++) {
            cin>>arr[i];
            sum+=arr[i];
        }
        int dis=(c-a)*(c-a)+(d-b)*(d-b);
        if(n==1){
            if (dis==arr[0]*arr[0]){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
            continue;
        }
        int Lmax=*max_element(arr.begin(),arr.end());
        int mn=max(0LL,Lmax-(sum-Lmax));
        int mx=sum;
        if (mn*mn<=dis&&dis<=mx*mx){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
