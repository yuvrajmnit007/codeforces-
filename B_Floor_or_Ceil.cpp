#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,n,m,k,p;
        cin>>x;
        cin>>n;
        cin>>m;
		k=x;
		p=x;
        if(m>=1) k=(x+1)/2;
        if(n>=1) p=x/2;
		if(n+m>x){
			cout<<0<<" ";
			cout<<0<<endl;
			continue;
		}
        for(int i=1;i<m;i++){
            k=(k+1)/2;
        }
        for(int i=0;i<n;i++){
            k=(k)/2;
        }
        cout<<k<<" ";
        for(int i=1;i<n;i++){
            p=(p)/2;
        }
        for(int i=0;i<m;i++){
            p=(p+1)/2;
        }
        cout<<p<<endl;
    }
    return 0;
}