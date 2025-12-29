#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int k;
        cin>>k;
        int arr[k];
        for(int i=1;i<=k;i++){
            cin>>arr[i];
        }
        int l;
        for(int i=1;i<=k;i++){
           if(arr[i]==arr[i+1] or arr[i]==arr[i+2] or arr[i]==arr[i-1]){
            l=arr[i];
            break;
           }
       } 
        for(int i=1;i<=k;i++){
           if(l!=arr[i]){
            cout<<i<<endl;
           }
        }

    }
    return 0;
}