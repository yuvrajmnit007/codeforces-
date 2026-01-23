#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m;
    cin>>m;
    vector<int>b(m);
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    vector<int>prev(n+1,0),curr(n+1,0);
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(abs(a[j-1]-b[i-1])<=1){
                curr[j]=prev[j-1]+1;
            }else{
                curr[j]=max(prev[j],curr[j-1]);
            }
        }
        prev=curr;
    }
    cout<<prev[n]<<endl;
    return 0;
}