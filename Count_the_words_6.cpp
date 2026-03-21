#include <bits/stdc++.h>
using namespace std;
#define int long long
void f(vector<vector<string>>&arr,int i,int j,unordered_map<string,int>&mp,vector<string>&ans,string &s){
    int m=arr.sise();
    int n=arr[0].size();


    vector<int>drow(4)={-1,0,1,0};
    vector<int>dcol(4)={0,-1,0,1};
    for(int p=0;p<4;p++){
        int r=i+drow[p];
        int c=i+dcol[p];
        if(r<m&&r>0&&c<n&&c>0&&vis[r][c]==0&&)
    }
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    while (t--) {
        int n,k;
        cin>>n>>k;
        vector<vector<string>>arr(k,vector<string>(n));
        for(int i=0;i<k;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
            }
        }
        vector<string>ans;
        int m;
        cin>>m;
        unordered_map<string,int>mp;
        vector<string>arr1(m);
        for(int i=0;i<m;i++){
            cin>>arr1[i];
            mp[arr1[i]]++;
        }
        f(arr,0,0,mp,ans,"");
    }
    return 0;
}