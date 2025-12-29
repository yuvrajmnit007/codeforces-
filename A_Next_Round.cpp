#include<iostream>
using namespace std;
int main(){
    int n,k,p;
    int m=0;
    cin>>n;
    cin>>k;
    int t[n];
    for(int i=0;i<n;i++){
        cin>>t[i];
    }
    p = t[k-1];
    for(int i=0;i<n;i++){
        if(t[i]>=p && t[i]>0){
            m++;
        }
    }
    cout<<m<<endl;
    return 0;
}