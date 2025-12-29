#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];
        int i=0;
        while(i<n-1){
            if(b[i]<a[0]){
                i++;
            }else{
                break;
            }
        }
        cout<<i<<endl;
    }
    return 0;
}