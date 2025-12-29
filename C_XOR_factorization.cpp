#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(k%2==0){
            cout<<0<<" ";
            for(int i=1;i<k;i++){
                cout<<n<<" ";
            }
        }else{
            for(int i=0;i<k;i++){
                cout<<n<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}