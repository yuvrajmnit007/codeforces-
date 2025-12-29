#include<iostream>
#include <cstdlib>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int a,b;
        a=abs(s-arr[0]);
        b=abs(arr[n-1]-s);
            if(a>=b){
                cout<<b+arr[n-1]-arr[0]<<endl;
            }else{
                cout<<a+arr[n-1]-arr[0]<<endl;
            }
        
    }
    return 0;
}