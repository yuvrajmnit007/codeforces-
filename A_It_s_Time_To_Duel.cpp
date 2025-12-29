#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        string ans;
        int sum=arr[n-1];
        for(int i=0;i<n-1;i++){
            if(arr[i]==0 && arr[i+1]==0){
                ans="YES";
                break;
            }
            sum=sum+arr[i];
        }
        if(ans=="YES"){
            cout<<"YES"<<endl;
        }
        else if(sum==0 || sum == n){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}