#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        int a=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==0){
                a++;
            }
        }
        if(a==0){
            cout<<"Alice"<<endl;
            continue;
        }
        if(arr[0]==1||arr[n-1]==1){
            if(a>0){
                cout<<"Alice"<<endl;
            }else{
                cout<<"Bob"<<endl;
            }
        }else{
            cout<<"Bob"<<endl;
        }
    }
    return 0;
}