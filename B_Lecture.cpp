#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    string arr[m][2];
    string arr3[m][2];
    for(int i=0;i<m;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
        if(arr[i][0].length()<=arr[i][1].length()){
            arr3[i][0]=arr[i][0];
            arr3[i][1]=arr[i][0];
        }else{
            arr3[i][0]=arr[i][1];
            arr3[i][1]=arr[i][0];
        }
    }
    string arr2[n];
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
                if(arr2[i]==arr3[j][0]){
                    cout<<arr3[j][0]<<" ";
                }else if(arr2[i]==arr3[j][1]){
                    cout<<arr3[j][0]<<" ";
                }
            }
        }
    cout<<endl;
    return 0;

}