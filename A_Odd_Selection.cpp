#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>odds;
        vector<int>evens;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x%2==0)evens.push_back(x);
            else odds.push_back(x);
        }
        if(k>n){
            cout<<"No"<<endl;
            continue;
        }
        int a,b;
        a=odds.size();
        b=evens.size();
        if(a+b==k){
            if(a%2==0){
                cout<<"No"<<endl;
            }else{
                cout<<"Yes"<<endl;
            }
        }else if(a+b>k){
            if(k%2==0&&b==0){
                cout<<"No"<<endl;
                continue;
            }
            if(a>=1){
                cout<<"Yes"<<endl;
            }else{
                cout<<"No"<<endl;
            }
        }
    }
    return 0;
}