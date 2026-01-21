#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=0;
    for(int i=0;i<k;i++){
        sum+=a[i];
    }
    int sum1=sum;
    int ans=0;
    for(int i=k;i<n;i++){
        sum1=sum1+a[i]-a[i-k];
        if(sum1<sum){
            ans=i-k+1;
            sum=sum1;
        }
    }
    cout<<ans+1<<endl;
    return 0;
}