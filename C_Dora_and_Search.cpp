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
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int i=0,j=n-1;
        int mx=n,mn=1;
        bool flag=0;
        while(i<j){
            if(arr[i]==mn){
                mn++;
                i++;
            }else if(arr[j]==mn){
                mn++;
                j--;
            }else if(arr[i]==mx){
                mx--;
                i++;
            }else if(arr[j]==mx){
                mx--;
                j--;
            }else{
                cout<<i+1<<" "<<j+1<<endl;
                flag=true;
                break;
            }
        }
        if(!flag){
            cout<<-1<<endl;
        }
    }
    return 0;
}