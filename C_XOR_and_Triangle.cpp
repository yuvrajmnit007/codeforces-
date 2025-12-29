#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        vector <int> y(x-1);
        vector <int> p(x-1);
        for(int i=1;i<x;i++){
            y[i-1]=x-i;
            p[i-1]=x^y[i-1];
        }
        for(int j=0;j<x-1;j++){
            if(((x+y[j])>p[j]) && ((x+p[j])>y[j]) && ((p[j]+y[j])>x)){
                cout<<y[j]<<endl; 
                break;
            }
        }
        cout<<"-1"<<endl;
        continue;
    }
    return 0;
}
