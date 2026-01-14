#include<bits/stdc++.h>
using namespace std;
#define int long long
bool check(int n){
    vector<int>freq(10,0);
    int k=n;
    while(k>0){
        freq[k%10]++;
        k/=10;
    }
    for(int i=1;i<10;i++){
        if(n%i!=0&&freq[i]>0){
            return false;
        }
    }
    return true;
}
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        while(check(n)==false){
            n++;
        }
        cout<<n<<endl;
    }
    return 0;
}