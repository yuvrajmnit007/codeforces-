#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n; 
        cin>>n;
        if(n==2){
            cout<<-1<<endl;
        }else{
            vector<vector<int>> ans(n, vector<int>(n, 0));
            int count=1;
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(i==j){
                        ans[i][j]=count;
                        count++;
                    }
                }
            }
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(i!=j&&ans[i][j]==0){
                        ans[i][j]=count;
                        ans[j][i]=count+1;
                        count=count+2;
                    }
                }
            }
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    cout<<ans[i][j]<<" ";
                }
                cout<<endl;
            }
        }
    }
    return 0;
}