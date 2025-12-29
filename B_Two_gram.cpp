#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string st;
    cin>>st;
    char arr[n-1];
    for(int i=0;i<n;i++){
        arr[i]=st[i];
    }
    return 0;
}