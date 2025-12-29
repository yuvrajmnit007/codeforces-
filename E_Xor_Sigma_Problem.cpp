#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long sum=0;
    sum=arr[0]^arr[1];
    for(int i=2;i<n;i++){
        sum=sum+sum^arr[i];
    }
    cout<<sum<<endl;
    return 0;
}