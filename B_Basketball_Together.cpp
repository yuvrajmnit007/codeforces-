#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,d;
    cin>>n>>d;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    int rand=0;
    int help=n;
    for(int i=n-1;i>=0;i--){
        int rand2;
        rand2=d/arr[i]+1;
        help-=rand2;
        if(help>=0){
            rand++;
        }else{
            break;
        }
    }
    cout<<rand<<endl;
    return 0;
}