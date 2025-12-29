#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long arr[n];
        long long arr1[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        for(int i=0;i<n;i++)arr1[i]=arr[i];
        sort(arr1,arr1+n);
        for(int i=0;i<n;i++){
            long long score =0;
            int count=0;
            int j=0;
            while(arr1[j]<=arr[i] && j<n && i<n){
                count++;
                score=score+arr1[j];
                j++;
            }
            while(score>=arr1[j] && j<n){
                count++;
                score=score+arr1[j];
                j++;
            }
            cout<<count-1<<" ";
        }
        cout<<endl;
    }
    return 0;
}