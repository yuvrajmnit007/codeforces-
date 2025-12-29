#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n;
        cin>>m;
        int count =0;
        vector<int> x(n);
        vector<int> r(n);
        vector<int> p;
        vector<int> q;
        for(int i=0;i<n;i++){
            cin>>x[i];
            cin>>r[i];
            p[i]=x[i]-x[i+1];
            q[i]=r[i]+r[i+1];
        }
        for(int i=0;i<n;i++){
            if(p[i]>q[i]){
                count=5+(r[i]-1)*8;
            }
            if(p[i]==q[i]){
                count=3+(r[i]-1)*8;
            }else{
                count=5+(r[i]-1)*8-2*(q[i]-p[i]);
            }
        }
        cout<<count<<endl;
    }
    return 0;
}