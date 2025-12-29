#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int t; 
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int j=0;
        int p;
        int sum =0;
        for(int i=0;i<n;i++){
            sum=sum+arr[i];
            p=sqrt(sum);
            if(p*p==sum && p%2==1){
                j++;
            }
        }
        cout<<j<<endl;
    }
    return 0;
}