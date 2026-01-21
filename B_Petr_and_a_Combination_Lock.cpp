#include<bits/stdc++.h>
using namespace std;
bool f(vector<int>&arr,int idx,int target){
    if(idx<0){
        if(target%360==0){
            return true;
        }else{
            return false;
        }
    }
    bool take=f(arr,idx-1,target+arr[idx]);
    bool nottake=f(arr,idx-1,target-arr[idx]);
    return take|nottake;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(f(arr,n-1,0)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}