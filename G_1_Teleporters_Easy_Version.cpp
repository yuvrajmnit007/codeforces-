#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,c;
        cin>>n>>c;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            arr[i]=x+i+1;
        }
        sort(arr.begin(),arr.end());
        int i=0;
        while(i<n&&arr[i]<=c){
            c-=arr[i];
            i++;
        }
        cout<<i<<endl;
    }
    return 0;
}