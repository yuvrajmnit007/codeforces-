#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        char arr[n][m];
        int p=0;
        for(int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                cin>>arr[i][j];
                if(arr[i][j]=='#'){
                    p++;
                }
            }
        }
        int t=(p+1)/2;
        for(int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                if(arr[i][j]=='#'){
                    t--;
                    if(t==0){
                        cout<<i+1<<" "<<j+1<<endl;
                        break;
                    }
                }
            }
        }
    }
    return 0;
}