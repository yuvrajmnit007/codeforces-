#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,char>>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i].first;
            if(i%2==0){
                arr[i].second='b';
            }
            else arr[i].second='r';
        }
        sort(arr.begin(),arr.end());
        bool flag=true;
        for(int i=1;i<n;i++){
            if(arr[i].second==arr[i-1].second){
                flag=false;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}