#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; 
    cin>>t; 
    while(t--){
        int n;
        long long x;
        cin>>n>>x;
        long long arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        long long count=0;
        long long help1=arr[0];
        long long help2=arr[0];
        for(int i=1;i<n;i++){
            if (arr[i] > help2) {
				help2 = arr[i];
			}
			if (arr[i] < help1) {
				help1 = arr[i];
			}
			if (help2 - help1 > 2 * x) {
				count++;
				help1 = help2 = arr[i];
			}
        }
        cout<<count<<endl;
    }
    return 0;
}