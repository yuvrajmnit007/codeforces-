#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        set<int> myset;
        for(int i=2;i*i<=n;i++){
            if(n%i==0&&!myset.count(i)){
                myset.insert(i);
                n=n/i;
                break;
            }
        }
        for(int i=2;i*i<=n;i++){
            if(n%i==0&&!myset.count(i)){
                myset.insert(i);
                n=n/i;
                break;
            }
        }
        if(n!=1){
            myset.insert(n);
        }
        if(myset.size()<3){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
            for(int i=0;i<myset.size();i++){
                cout<<*next(myset.begin(),i)<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}