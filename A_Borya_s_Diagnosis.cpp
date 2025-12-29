#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[2][n];
    int sum[n];
    for(int i=0;i<2;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<2;j++){
            sum=sum+arr[j][i];
        }
        sum[i]=sum;
    }
    

}