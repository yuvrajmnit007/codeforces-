#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;
    long long arr[n];
    for (long long i = 0; i < n; i++) {
        cin >> arr[i];
    }
    long long sum1=0;
    for(int i=0;i<k;i++){
        sum1=sum1+arr[i];
    }
    long long sum = sum1;
    for (int i=1; i+k-1< n; i++) {
        sum1=sum1-arr[i-1]+arr[k+i-1];
        sum =sum+sum1;
    }
    cout << fixed << setprecision(10) << (double)sum / (n - k + 1);
    return 0;
}
