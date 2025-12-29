#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int p=log10(n);
    int t=1;
    for(int i=1;i<=p;i++){
        t=t*10;
    }
    int k;
    k=n/t;
    cout<<(k+1)*t-n<<endl;
    return 0;
}