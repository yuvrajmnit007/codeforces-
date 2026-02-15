#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
       int n, k;
        cin>>n>>k;
        k--; 
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int j=-1;
        for(int i=0;i<n;i++) {
            if(arr[i]>arr[k]) {
                j=i;
                break;
            }
        }
        int count=0;
        swap(arr[0],arr[k]);
        for(int i=1;i<n;i++) {
            if(arr[i]<arr[0]) count++;
            else break;
        }
        swap(arr[0],arr[k]);
        int count1 = 0;
        if (j!=-1) {
            swap(arr[j],arr[k]);
            int curr=arr[0];
            int curr_ind=0;
            for(int i=1;i<n;i++) {
                if(arr[i]>curr) {
                    curr=arr[i];
                    curr_ind=i;
                }
                if(curr_ind==j) count1++;
                else if(i>j) break;
            }
        }
        cout<<max(count,count1)<<endl;
}
return 0;
}