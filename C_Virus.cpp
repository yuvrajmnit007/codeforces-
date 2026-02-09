#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>arr(m);
        for(int i=0;i<m;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        vector<int>help;
        for(int i=0;i<m-1;i++){
            help.push_back(arr[i+1]-arr[i]-1);
        }
        help.push_back(arr[0]+n-arr[m-1]-1);
        sort(help.rbegin(),help.rend());
        int days=0;
        int saved=0;
        for(int i=0;i<help.size();i++){
            int gap=help[i]-2*days;
            if(gap>0){
                saved+=max(1,gap-1);
                days+=2;
            }
        }
        cout<<n-saved<<endl;
    }
    return 0;
}