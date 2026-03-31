#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n,m;
        cin>>n>>m;
        vector<int>arr(n);
        int help=0;
        for(int i=0;i<n;i++){
            string x;
            cin>>x;
            reverse(x.begin(),x.end());
            int temp=0;
            help+=x.size();
            for(int j=0;j<x.size();j++){
                if(x[j]=='0'){
                    temp++;
                }else{
                    break;
                }
            }
            arr[i]=temp;
        }
        sort(arr.rbegin(),arr.rend());
        int help1=0;
        for(int i=0;i<n;i=i+2){
            help1+=arr[i];
        }
        if(m>=help-help1)cout<<"Anna"<<endl;
        else cout<<"Sasha"<<endl;
    }
    return 0;
}