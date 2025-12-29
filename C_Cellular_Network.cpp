#include<bits/stdc++.h>
using namespace std; 
int main(){
    int n,m;
    cin>>n>>m;
    int arr1[n];
    int arr2[m];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    vector<int>dist(n,INT_MAX);
    int j=0;
    for(int i=0;i<n;i++){
        while(j+1<m&&arr2[j+1]<=arr1[i]){
            j++;
        }
        dist[i]=min(dist[i],abs(arr2[j]-arr1[i]));
    }
    j=m-1;
    for(int i=n-1;i>=0;i--){
        while(j-1>=0&&arr2[j-1]>=arr1[i]){
            j--;
        }
        dist[i]=min(dist[i],abs(arr2[j]-arr1[i]));
    }
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        ans=max(ans,dist[i]);
    }
    cout<<ans<<endl;
    return 0;
}