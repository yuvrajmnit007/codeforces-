#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        vector<long long> arr1(n);
        vector<long long> arr2(k);
        for(long long i=0;i<n;i++){
            cin>>arr1[i];
        }
        for(long long i=0;i<k;i++){
            cin>>arr2[i];
        }
        if(n==0){
            for(long long i=0;i<k;i++) cout<<0<<" ";
            cout<<"\n";
            continue;
        }
        vector<long long> arr3(n), mx(n);
        mx[0]=arr1[0];
        arr3[0]=arr1[0];
        for(long long i=1;i<n;i++){
            arr3[i]=arr1[i]+arr3[i-1];
            mx[i]=max(mx[i-1],arr1[i]);
        }
        for(long long i=0;i<k;i++){
            long long x=arr2[i];
            if(mx[0] > x){
                cout<<0<<" ";
                continue;
            }
            if(mx[n-1] <= x){
                cout<<arr3[n-1]<<" ";
                continue;
            }
            long long l=0, r=n-1;
            while(l<r){
                long long mid = l + (r - l) / 2;
                if(mx[mid] <= x){
                    l = mid + 1;
                } else {
                    r = mid;
                }
            }
            cout << arr3[l-1] << " ";
        }
        cout<<endl;
    }
    return 0;
}
