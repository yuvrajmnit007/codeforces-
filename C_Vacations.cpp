#include<bits/stdc++.h> 
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<vector<int>>points(n,vector<int>(3,0));
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            points[i][1]=1;
        }
        else if(arr[i]==2){
            points[i][2]=1;
        }
        if(arr[i]==3){
            points[i][2]=1;
            points[i][1]=1;
        }
    }
    vector<vector<int>>dp(n,vector<int>(4,-1));
    dp[0][0]=max(points[0][1],points[0][2]);
    dp[0][1]=max(points[0][0],points[0][2]);
    dp[0][2]=max(points[0][0],points[0][1]);
    dp[0][3]=max(points[0][0],max(points[0][1],points[0][2]));
    for(int day=1;day<n;day++){
        for(int last=0;last<4;last++){
            dp[day][last]=0;
            for(int task=0;task<3;task++){
                if(task!=last){
                    int point=points[day][task]+dp[day-1][task];
                    dp[day][last]=max(dp[day][last],point);
                }
            }
        }
    }
    cout<<n-dp[n-1][3]<<endl;
    
    return 0;
}