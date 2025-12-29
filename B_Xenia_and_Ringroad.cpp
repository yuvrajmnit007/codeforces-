#include <iostream>
using namespace std;
int main(){
    long long n,m;
    cin>>n>>m;
    int arr[m];
    for(long long i=0;i<m;i++){
        cin>>arr[i];
    }
    long long l=0;
    for(long long i=0;i<m-1;i++){
        if(arr[i+1]-arr[i]>=0){
            l=l+arr[i+1]-arr[i];
        }else{
            l=l+arr[i+1]-arr[i]+n;
        }
    }
    cout<<arr[0]+l-1<<endl;
    return 0;
}