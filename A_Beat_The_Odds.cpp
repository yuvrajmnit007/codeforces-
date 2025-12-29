#include<iostream>
using namespace std; 
int main(){
    int n;
    cin>>n;
    while(n--){
        int t;
        cin>>t;
        int arr[t];
        for(int i=0;i<t;i++){
            cin>>arr[i];
        }
        int m=0;
        int k=0;
        for(int i=0;i<t;i++){
            if(arr[i]%2==0){
                m++;
            }else{
                k++;
            }
        }
        if(k>=m){
            cout<<m<<endl;
        }else{
            cout<<k<<endl;
        }
    }
    return 0;
}