#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>st(n);
        for(int i=0;i<n;i++){
            cin>>st[i];
        }
        int ans=-1;
        for(int i=0;i<n;i++){
            int flips=k;
            int count=0;
            for(int j=i;j<n;j++){
                if(st[j]==0){
                    if(flips>0){
                        flips--;
                        count++;
                    }else{
                        break;
                    }
                }else if(st[j]==1){
                    count++;
                }
                ans=max(ans,count);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
