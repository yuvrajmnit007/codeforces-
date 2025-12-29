#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    int k[t];
    int sum=0;
    for(int i=0;i<t;i++){
        cin>>k[i];
        sum+=k[i];
    }
    sort(k,k+t);
    int suffix[t];
    suffix[0]=k[t-1];
    for(int i=1;i<t;i++){
        suffix[i]=suffix[i-1]+k[t-i-1];
    }
    for(int i=0;i<t;i++){
        int ans=sum-suffix[i];
        if(ans<suffix[i]){
            cout<<i+1<<endl;
            break;
        }
    }
    return 0;
}