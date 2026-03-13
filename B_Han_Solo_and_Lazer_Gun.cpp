#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    double n,x,y;
    cin>>n>>x>>y;
    vector<pair<double,double>>arr;
    for(int i=0;i<n;i++){
        int p,q;
        cin>>p>>q;
        arr.push_back({p,q});
    }
    int count=0;
    for(int i=0;i<n;i++){
        double p=arr[i].first;
        double q=arr[i].second;
        if(p==1e18&&q==1e18){
            continue;
        }
        double slope;
        if(p-x==0){
            slope=1e18;
        }else {
            slope=((q-y)/(p-x));
        }
        for(int j=i;j<n;j++){
            double p1=arr[j].first;
            double q1=arr[j].second;
            if(p==1e18&&q==1e18){
            continue;
            }
            double slope1;
            if(p1-x==0){
                slope1=1e18;
            }else {
                slope1=((q1-y)/(p1-x));
            }
            if(slope==slope1){
                arr[j].first=1e18;
                arr[j].second=1e18;
            }
        }
        arr[i].first=1e18;
        arr[i].second=1e18;
        count++;
    }
    cout<<count<<endl;
    return 0;
}