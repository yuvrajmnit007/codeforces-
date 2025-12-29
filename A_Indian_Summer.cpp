#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string st[n];
    string st1[n];
    for(int i=0;i<n;i++){
        cin>>st[i]>>st1[i];
    }
    int k=n;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(st[i]==st[j] && st1[i]==st1[j]){
                k--;
                break;
            }
        }
    }
    cout<<k<<endl;
    return 0;
}