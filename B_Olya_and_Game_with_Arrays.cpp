#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; 
    cin>>t;
    while(t--){
        int n;  
        cin>>n;
        vector<int>help;
        int count=INT_MAX;
        while(n--){
            int m;
            cin>>m; 
            int arr[m];
            for(int i=0;i<m;i++)cin>>arr[i];
            sort(arr,arr+m);
            help.push_back(arr[1]);
            count=min(count,arr[0]);
        }
        sort(help.begin(),help.end());
        long long sum=count;
        for(int i=1;i<help.size();i++){
            sum+=help[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}