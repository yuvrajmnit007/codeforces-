#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,p,q;
    cin>>n>>k>>p>>q;
    if((n<=p&&p<n+100)&&(k<=q&&q<k+100)){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}