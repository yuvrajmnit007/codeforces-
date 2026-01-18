#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int count=1;
        int i=0;
        while(i<n){
            int j=i+1;
            int count1=1;
            while(j<n){
                if(a[j]==a[j-1]+1){
                    count1++;
                }else if(a[j]==a[j-1]){
                    // do nothing
                }else{
                    break;
                }
                j++;
            }
            count=max(count,count1);
            i=j;
        }
        cout<<count<<endl;
    }
    return 0;
}