#include<iostream>
using namespace std;
int main(){
    int n;
    int j=0;
    cin>>n;
    char st[n];
    for(int i=0;i<n;i++){
        cin>>st[i];
    }
    for(int k=0;k<n;k++){
        if(st[k]==st[k+1]){
            j++;
        }
    }
    cout<<j<<endl;
    return 0;
}