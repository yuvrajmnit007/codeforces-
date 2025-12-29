#include<bits/stdc++.h>
using namespace std;        
int main(){
    int t;
    t=1;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(auto &x : a) cin>>x;
        sort(a.begin(), a.end());
        int i=0,j=n-1;
        int turn=0;
        while(i<=j){
            if(turn%2==0){
                cout<<a[i]<<" ";
                i++;
            }else{
                cout<<a[j]<<" ";
                j--;
            }
            turn++;
        }
        cout<<endl;
    }
    return 0;
}