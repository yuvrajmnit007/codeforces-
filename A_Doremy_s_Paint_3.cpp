#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
        sort(arr.begin(),arr.end());
        int count_different=1;
        int count_frequency=0;
        int help=arr[0];
        for(int j=1;j<n;j++){
            if(arr[j]!=arr[j-1]){
                count_different++;
                if(count_different>=3){
                    break;
                }
            }
        }
        if(count_different>=3){
            cout<<"No"<<endl;
        }else{
            int i=0;
            while(arr[i]==arr[0]&&i<n){
                count_frequency++;
                i++;
            }
            int rem=n-count_frequency;
            if(rem==0){
                cout<<"Yes"<<endl;
            }
            else if(n%2==0&&count_frequency==rem){
                cout<<"Yes"<<endl;
            }else if(n%2==1&&(count_frequency==rem+1||count_frequency==rem-1)){
                cout<<"Yes"<<endl;
            }else{
                cout<<"No"<<endl;
            }
        }
    }
    return 0;
}