#include<bits/stdc++.h>
using namespace std;
int main(){
    long long MOD=1073741824;
    int a,b,c;
    cin>>a>>b>>c;
    long long pdt=a*b*c;
    long long ans=0;
    int arr[pdt+1]={0};
     for (int i = 1; i <= pdt; i++) {
        for (int j = i; j <= pdt; j += i) {
            arr[j]++;
        }
    }
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            for(int k=1;k<=c;k++){
                ans=(ans+arr[i*j*k])%MOD;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
