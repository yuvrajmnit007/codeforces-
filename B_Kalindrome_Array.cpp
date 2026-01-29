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
        int i=0,j=n-1;
        while(i<=j){
            if(arr[i]==arr[j]){
                i++;
                j--;
            }else{
                break;
            }
        }
        if(i>=j){
            cout<<"YES"<<endl;
            continue;
        }
        int a=arr[i];
        int b=arr[j];
        vector<int>p,q;
        for(int i=0;i<n;i++){
            if(arr[i]==a){
                q.push_back(arr[i]);
            }else if(arr[i]==b){
                p.push_back(arr[i]);
            }else{
                q.push_back(arr[i]);
                p.push_back(arr[i]);
            }
        }
        bool flag1=true,flag2=true;
        i=0;j=p.size()-1;
        while(i<=j){
            if(p[i]!=p[j]){
                flag1=false;
                break;
            }
            i++,j--;
        }
        i=0;j=q.size()-1;
        while(i<=j){
            if(q[i]!=q[j]){
                flag2=false;
                break;
            }
            i++,j--;
        }
        if(flag1||flag2){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
     }
     return 0;
}