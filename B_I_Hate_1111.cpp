#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>help={1111111111,111111111,11111111,1111111,111111,11111,1111,111,11};
        long long k=n;
        bool ans=true;
        while(k>0){
            int i=0;
            for(i=0;i<9;i++){
                if(k/help[i]>=1){
                    break;
                }
            }
            k=k-(k/help[i])*help[i];
            if(k==0){
                ans=false;
            }
            if(k<11){
                break;
            }
        }
        cout<<((ans==true)?"NO":"YES")<<endl;
    }
    return 0;
}