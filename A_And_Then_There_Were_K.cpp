#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count=0;
        while(n){
            count++;
            n=n>>1;
        }
        count--;
        cout<<(1<<count)-1<<endl;
    }
}