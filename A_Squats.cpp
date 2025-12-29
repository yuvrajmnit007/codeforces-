#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string st;
    cin>>st;
    int j=0;
    for(int i=0;i<n;i++){
        if(st[i]=='x'){
            j++;
        }
    }
    int p=abs(j-n/2);
    cout<<p<<endl;
    if(j>=n/2){
        for(int i=0;i<n;i++){
            if(st[i]=='x' && p>0){
                cout<<"X";
                p--;
            }else {
                cout<<st[i];
            }
    }
}else{
        for(int i=0;i<n;i++){
            if(st[i]=='X' && p>0){
                cout<<"x";
                p--;
            }else {
                cout<<st[i];
            }
    }
    }
    cout<<endl;
    return 0;
}