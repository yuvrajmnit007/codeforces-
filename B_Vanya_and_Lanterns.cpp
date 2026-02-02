#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, l;
    cin >>n>>l;
    vector<double> arr(n);
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    double mx=arr[0];
    for (int i=1;i<n;i++) {
        mx=max(mx,(arr[i]-arr[i-1])/2.0);
    }
    mx=max(mx,(double)(l-arr[n-1]));
    cout <<fixed<<setprecision(10)<<mx<< endl;
    return 0;
}
