#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        vector<int>odds;
        vector<int>evens;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2==0){
                evens.push_back(arr[i]);
            }
            else{
                odds.push_back(arr[i]);
            }
        }
        if(odds.size()==0){
            for(int i=0;i<n;i++){
                cout<<0<<" ";
            }
            cout<<endl;
            continue;
        }
        if(evens.size()==n){
            for(int i=0;i<n;i++){
                cout<<0<<" ";
            }
            cout<<endl;
            continue;
        }
        sort(odds.begin(),odds.end());
        sort(evens.begin(),evens.end());
        int odd_index=odds.size()-1;
        int even_index=evens.size()-1;
        for(int i=0;i<n;i++){
            int sum=0;
            if(i%2==0){
                if(even_index>=0){
                    sum+=evens[even_index];
                    even_index--;
                }
            }
            else{
                if(odd_index>=0){
                    sum+=odds[odd_index];
                    odd_index--;
                }
            }
            cout<<sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}