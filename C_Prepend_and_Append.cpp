#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
       int t;
       cin>>t;
       string st;
       cin>>st;
       int i=0;
       int j=t-1;
       int p=(t+1)/2;
       while(i<j&&p>=0){
            if(st[i]=='1' && st[j]=='0'){
                i++;
                j--;
            }
            if(st[i]=='0' && st[j]=='1'){
                i++;
                j--;
            }
            p--;
       }
       if(j-i+1>0){
            cout<<j-i+1<<endl;
       }else{
            cout<<0<<endl;
       }
    }
    return 0;
}