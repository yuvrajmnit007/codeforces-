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
        bool turn=false;
        while(i<=j){
            if(turn){
                if(arr[i]>arr[j]){
                    cout<<"L";
                    i++;
                    turn=false;
                }else{
                    cout<<"R";
                    j--;
                    turn=false;
                }
            }else{
                if(arr[i]>arr[j]){
                    cout<<"R";
                    j--;
                    turn=true;
                }else{
                    cout<<"L";
                    i++;
                    turn=true;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}