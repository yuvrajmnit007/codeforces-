#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int n, l;
    cin >> n >> l;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    float diff[n];
    diff[0]=arr[0]-0;
    for(int i=1;i<n;i++){
        diff[i]=(arr[i]-arr[i-1])/2;
    }
    float max=diff[0];
    for(int i=0;i<n;i++){
        if(diff[i]>max){
            max=diff[i];
        }
    }
    cout.precision(10);
    cout<<fixed<<max<<endl;
    return 0;
}
