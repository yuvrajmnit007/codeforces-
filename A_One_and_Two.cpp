#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        long long pdt=1,pdt1=1;
        for(int i=0;i<n;i++){
            pdt=pdt*arr[i];
        }
        int j=0;
        for(int i=0;i<n-1;i++){
            pdt1=arr[i]*pdt1;
            if(pdt1!=0 && pdt1==pdt/pdt1 && pdt%pdt1==0){
                j=i+1;
                break;
            }
        }
        if(j>0){
            cout<<j<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
    return 0;
}