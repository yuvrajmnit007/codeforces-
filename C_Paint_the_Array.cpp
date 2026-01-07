#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>odds;
        vector<int>evens;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(i%2==0)evens.push_back(x);
            else odds.push_back(x);
        }
        int a,b;
        a=b=0;
        for(auto it:evens){
            a=__gcd(it,a);
        }
        for(auto it:odds){
            b=__gcd(it,b);
        }
        bool found=false;
        for(auto it:evens){
            if(it%b==0){
                found=true;
            }
        }
        if(found){
            bool temp=false;
            for(auto it:odds){
                if(it%a==0){
                    temp=true;
                    cout<<0<<endl;
                    break;
                }
            }
            if(!temp)cout<<a<<endl;
        }else{
            cout<<b<<endl;
        }
    }
    return 0;
}