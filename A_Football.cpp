#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string st[n];
    for(int i=0;i<n;i++){
        cin>>st[i];
    }
    int t=0;
    string st2;
    for(int i=0;i<n;i++){
        if(st[i]==st[0]){
            t++;
        }
        if(st[i]!=st[0]){
            st2=st[i];
        }
    }
    if(t>n-t){
        cout<<st[0]<<endl;
    }else{
        cout<<st2<<endl;
    }

    return 0;
}
