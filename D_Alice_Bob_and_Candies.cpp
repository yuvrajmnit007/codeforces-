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
        int move=0,a=0,b=0,x=0,y=0;
        int i=0,j=n-1;
        int turn=0;
        while(i<=j){
            if(turn==0){
                move++;
                int temp=0;
                int k;
                for(k=i;k<=j;k++){
                    temp+=arr[k];
                    if(temp>b)break;
                }
                x+=temp;
                a=temp;
                i=k+1;
                turn=1;
            }else{
                move++;
                int temp=0;
                int k;
                for(k=j;k>=i;k--){
                    temp+=arr[k];
                    if(temp>a)break;
                }
                y+=temp;
                b=temp;
                j=k-1;
                turn=0;
            }
        }
        cout<<move<<" "<<x<<" "<<y<<endl;
    }
    return 0;
}