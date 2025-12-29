#include<bits/stdc++.h>
using namespace std;
void change(int arr[],int count,int p){
    int help=arr[p];
    while(count){
        arr[p]=arr[p+1];
        p++;
        count--;
    }
    arr[p]=help;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int ans[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            ans[i]=i+1;
        }
        int p=0;
        bool is=true;
        while(p<n){
            int count=0;
            int help=arr[p];
            int k=p;
            while(arr[p]==help && p<n){
                count++;
                p++;
            }
            if(count==1){
                is=false;
                break;
            }
            else{
                change(ans,p-k-1,k);
            }
        }
        if(is){
            for(int i=0;i<n;i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}