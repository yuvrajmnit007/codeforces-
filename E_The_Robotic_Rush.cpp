#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        vector<int>arr1(n);
        for(int i=0;i<n;i++){
            cin>>arr1[i];
        }
        set<int>arr2;
        for(int i=0;i<m;i++){
            int x;
            cin>>x;
            arr2.insert(x);
        }
        string st;
        cin>>st;
        int mx=INT_MIN;
        int mn=0;
        int count =0;
        for(int i=0;i<st.size();i++){
            if(st[i]=='L'){
                count--;
                mn=min(mn,count);
            }else{
                count++;
                mx=max(mx,count);
            }
        }
        sort(arr2.begin(),arr2.end());

    }
}