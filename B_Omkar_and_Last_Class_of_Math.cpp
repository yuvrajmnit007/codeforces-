#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n; 
        cin>>n;
        bool found=false;
        if(n%2==0){
            cout<<n/2<<" "<<n/2<<endl;
            found=true;
        }else{
            for(int i=3;i*i<=n;i++){
                if(n%i==0){
                    cout<<n/i<<" "<<n-(n/i)<<endl;
                    found=true;
                    break;
                }
            }
        }
        if(!found){
            cout<<1<<" "<<n-1<<endl;
        }
    }
    return 0;
}