#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string st;
        cin>>st;
        int i=0;
        int ans=0;
        while(i<n){
            int count=0;
            while(st[i]=='.'){
                i++;
                count++;
            }
            if(count>=3){
                ans=2;
                break;
            }
            ans+=count;
            i++;
        }
        cout<<ans<<endl;
    }
    return 0;
}