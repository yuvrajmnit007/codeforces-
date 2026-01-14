#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int t=0;t<1;t++){
        string st;
        cin>>st;
        int l=-1,r=-1;
        for(int i=1;i<n;i++){
            if(st[i]<st[i-1]){
                l=i;
                break;
            }
        }
        if(l==-1){
            cout<<"NO"<<endl;
            continue;
        }else {
            cout<<"YES"<<endl;
            cout<<l<<" "<<l+1<<endl;;
        }
    }
    return 0;
}