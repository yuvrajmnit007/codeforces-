#include<bits/stdc++.h> 
using namespace std;    
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,l,r;
        cin>>n>>l>>r;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            a[i]=i+1;
            if(i==r-1){
                a[i]=l-1;
            }
        }
        vector<int> res;
        res.push_back(a[0]);
        for(int i=1;i<n;i++){
            res.push_back(a[i-1]^a[(i)]);
        }
        for(auto x:res){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}