#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    int maxval =INT_MIN;
    while(t--){
        int a[t];
        int b[t];
        int sum[t];
        for(int i=0;i<t;i++){
            cin>>a[i];
            cin>>b[i];
        }
        sum[0]=b[0];
        for(int i=0;i<t-1;i++){
            sum[i+1]=sum[i]+b[i+1]-a[i+1];
        }
        for(int i=0;i<t;i++){
            if(sum[i]>=maxval){
                maxval =sum[i];
            }
        }
        cout<<sum[0];
    }
    cout<<maxval<<endl;
    return 0;
}