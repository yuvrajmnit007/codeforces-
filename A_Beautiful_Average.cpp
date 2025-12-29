#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; 
    cin>>t; 
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int max=INT_MIN;
        for(auto num:arr){
            if(num>max){
                max=num;
            }
        }
        cout<<max<<endl;
    }
    return 0;
}