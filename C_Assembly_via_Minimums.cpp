#include<bits/stdc++.h>
using namespace std; 
int main(){
    int t;
    cin>>t; 
    while(t--){
        int n; cin>>n;
        int k=n*(n-1)/2;
        vector<int>arr(k);
        for(int i=0;i<k;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        int a=n-1; int i=0;
        while(a>0){
            cout<<arr[i]<<" ";
            i+=a;
            a--;
        }
        cout<<"1000000000"<<endl;
    }
    return 0;
}