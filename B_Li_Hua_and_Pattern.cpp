#include<bits/stdc++.h>
using namespace std;  
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k; 
        cin>>n>>k;
        vector<vector<int>> arr(n,vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
            }
        }
        int count=0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(arr[i][j] != arr[n-1-i][n-1-j]){
                    count++;
                }
            }
        }
        count/=2;
        if(k<count){
            cout<<"NO"<<endl;
        }
        else{
            int rem = k - count;
            if (rem % 2 == 0) cout << "YES\n";
            else {
                if (n % 2 != 0) cout << "YES\n";
                else cout << "NO\n";
            }
        }
    }
    return 0;
}