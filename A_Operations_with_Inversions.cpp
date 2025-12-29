#include<bits/stdc++.h>
using namespace std;    
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int inv_count=0;
        int i=0;
        while(i<n){
            for(int j=i+1;j<n;j++){
                if(arr[i]>arr[j]&& arr[j]!=-1){
                    inv_count++;
                    arr[j]=-1;
                }
            }
            i++;
        }
        cout<<inv_count<<endl;
    }
    return 0;
}