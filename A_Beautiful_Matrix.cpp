#include<iostream>
using namespace std;
int main(){
    int mat[5][5];
    int p,q;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>mat[i][j];
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(mat[i][j]==1){
                p=abs(i-2);
                q=abs(j-2);
            }
        }
    }
    cout<<p+q<<endl;
    return 0;

}