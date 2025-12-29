#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        long long sum=0;
        int a=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
            if(arr[i]==0){
                a++;
            }
        }
        cout<<sum+a<<endl;
    }
    return 0;
}