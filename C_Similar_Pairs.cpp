#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        int even,odd;
        even=odd=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2==0){
                even++;
            }else{
                odd++;
            }
        }
        bool ans=false;
        if(even%2==0){
            ans=true;
            cout<<"YES"<<endl;
            continue;
        }else if(even%2==1){
            sort(arr.begin(),arr.end());
            for(int i=1;i<n;i++){
                if(abs(arr[i]-arr[i-1])==1){
                    ans=true;
                    cout<<"YES"<<endl;
                    break;
                }
            }
        }
        if(!ans){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}