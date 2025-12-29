#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[m];
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    sort(arr,arr+m);
    int min=INT_MAX;
    int j=n-1;
    int i=0;
    while(j<m){
        int diff=arr[j]-arr[i];
        i++;
        j++;
        if(min>diff){
            min=diff;
        }
    }
    cout<<min<<endl;
    return 0;
}