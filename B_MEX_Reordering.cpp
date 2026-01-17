#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        int zeros=0;
        int ones=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==0){
                zeros++;   
            }else if(arr[i]==1){
                ones++;
            }
        }
        if(zeros>1&&ones>0){
            cout<<"YES"<<endl;
        }else if(zeros==1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}