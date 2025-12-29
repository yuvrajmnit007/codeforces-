#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; 
    cin>>t;
    while(t--){
        int n; 
        cin>>n; 
        int arr[n];
        int count=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2==1){
                arr[i]=arr[i]+arr[i]%10;
            }
            if(arr[i]%10==0){
                count++;
            }
        }
        bool ans=true;
        if(count==n){
            for(int i=1;i<n;i++){
                if(arr[i]!=arr[0]){
                    ans=false;
                }
            }
        }
        else if(count>0){
            ans=false;
        }else{
            for (int i = 0; i < n; i++) {
				int cnt = 0;    
                while (arr[i] % 10 != 2) {
                    arr[i] += arr[i] % 10;
                    cnt++;
                    if (cnt > 10) break;  
                }
            }
		}
        for(int i=1;i<n;i++){
            if(arr[i]%20!=arr[0]%20){
                ans=false;
            }
        }
        if(ans==true){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}