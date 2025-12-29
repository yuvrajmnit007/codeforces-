#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int m=arr[0];
    for(int i=0;i<n;i++){
        int p=sqrt(arr[i]);
        if(p*p!=arr[i]){
            if(m<arr[i]){
                m=arr[i];;
            }
        }
    }
    cout<<m<<endl;
    return 0;
}