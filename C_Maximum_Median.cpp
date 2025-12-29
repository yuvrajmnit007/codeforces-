#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    long long arr[n];
    for (int  i = 0; i < n; i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    long long low=arr[(n)/2];
    long long high=arr[(n)/2]+k+1;
    while(low+1<high){
        long long mid=low+(high-low)/2;
        long long need=0;
        for(int i=n/2;i<n;i++){
            if(arr[i]<mid){
                need+=mid-arr[i];
                if(need>k)break;
            }
        }
        if (need <= k) {
            low = mid;   
        } else {
            high = mid;
        }
    }
    cout<<low<<endl;
    return 0;
}