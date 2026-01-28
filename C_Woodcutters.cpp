#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    vector<int>a(t),b(t);
    for(int i=0;i<t;i++){
        cin>>a[i]>>b[i];
    }
    vector<int>help(t);
    help[0]=0;
    for(int i=1;i<t;i++){
        help[i]=a[i]-a[i-1];
    }
    if(t<2){
        cout<<t<<endl;
        return 0;
    }
    int count=0;
    for(int i=1;i<t-1;i++){
        if(b[i]<help[i]){
            count++;
            help[i]-=b[i];
        }
        else if(b[i]<help[i+1]){
            help[i+1]-=b[i];
            count++;
        } 
    }
    cout<<count+2<<endl; 
    return 0;
}