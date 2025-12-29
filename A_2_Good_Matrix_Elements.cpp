#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[n/2][i];
        sum=sum+arr[i][n/2];
    }
    int j=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[j][i];
        sum=sum+arr[n-j-1][i];
        j++;
    }
    cout<<sum-3*arr[n/2][n/2]<<endl;
    return 0;
}