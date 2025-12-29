#include<bits/stdc++.h>
using namespace std;
int main (){
    int t; cin>>t;
    while(t--){
        int a,b,xk,yk,xq,yq;
        cin>>a>>b>>xk>>yk>>xq>>yq;
        set<pair<int, int>> knight1, knight2;
        int arr[8][2] = {{a,b},{a,-b},{-a,-b},{-a,b},{b,a},{b,-a},{-b,-a},{-b,a}};
        for(int i=0;i<8;i++){
            knight1.insert({xk+arr[i][0],yk+arr[i][1]});
            knight2.insert({xq+arr[i][0],yq+arr[i][1]});
        }
        int count=0;
        for (auto &pos : knight1) {
            if (knight2.count(pos)) count++;
        }
        cout<<count<<endl;
    }
    return 0;
}