#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    double sum=0.0;
    double arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    double ans;
    ans=sum/n;
    cout<< fixed << setprecision(12) <<ans<<endl;
    return 0;
}