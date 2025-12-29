#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int n=str.length();
    char arr[n/2+1];
    for(int i=0;i<n/2+1;i++){
        arr[i]=(str[2*i]);
    }
    sort(arr,arr+n/2+1);
    for(int i=0;i<n/2;i++){
        cout<<arr[i]<<"+";
    }
    cout<<arr[n/2]<<endl;
    return 0;
}