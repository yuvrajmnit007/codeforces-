#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int j=1;
    int m=1;
    for(int i=1;i<n;i++){
        if(arr[i-1]<=arr[i]){
            j++;
        }else{
            m=max(m,j);
            j=1;
        }
    }
    m=max(m,j);
    cout<<m<<endl;
    return 0;
}