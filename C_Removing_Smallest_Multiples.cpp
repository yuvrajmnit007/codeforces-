#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; 
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string st;
        cin>>st;
        long long sum=0;
        for (int i = 1; i <= n; i++){
			for (int j = i; j <= n; j += i){	
				if (st[j - 1] == '1')
					break;
				else
				{
                    if(st[j-1]!='@'){
                        st[j-1] ='@';
					    sum += i;
                    }
				}
			}
		} 
        cout<<sum<<endl;
    }
    return 0;
}