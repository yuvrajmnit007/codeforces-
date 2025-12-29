#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while (n--){
        long long x,y,a;
        cin>>x>>y>>a;
        int sum=0;
        int k=1;
        for(int i=0;i<a/(x+y);i++){
            if(sum<=a){
                if(i%2==0){
                    sum=sum+x;
                }
                else{
                    sum=sum+y;
                }
                k++;
            }
        }
        if(k%2==0){
            cout<<"YES"<<endl;
        }if(k%2==1){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}