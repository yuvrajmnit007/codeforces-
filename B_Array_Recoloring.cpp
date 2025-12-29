#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n;
        cin>>k;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        long long sum=0;
        if(k!=1){
			sort(arr,arr+n);
			for(int i=0;i<=k;i++)
			sum+=arr[n-1-i];
		}
		else{
			sum=arr[0]+arr[n-1];
			for(int i=1;i<n-1;i++)
			sum=max(sum,arr[i]+max(arr[0],arr[n-1]));
		}
        cout<<sum<<endl;
    }
    return 0;
}