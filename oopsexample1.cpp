#include <bits/stdc++.h>
using namespace std;
#define int long long
class geometryclass{
    public:
    int rectarea(int a,int b){
        return a*b;
    }
    int rectperi(int a,int b){
        return a+a+b+b;
    }
    int sqrarea(int side){
        return side*side;
    }
    int circlearea(int radius){
        return M_1_PI*radius*radius;
    }
    int circlecircumference(int radius){
        return 2*M_PI*radius;
    }
    int trianglearea(int a,int b,int c){
        int s=(a+b+c)/2;
        return sqrt(s*(s-a)*(s-b)*(s-c));
    }
};
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int l=2,b=5,s=2,a=3,c=4,r=7;
    geometryclass g1;
    cout<<g1.rectarea(l,b)<<endl;
    cout<<g1.rectperi(l,b)<<endl;
    cout<<g1.sqrarea(s)<<endl;
    cout<<g1.circlearea(r)<<endl;
    cout<<g1.circlecircumference(r)<<endl;
    cout<<g1.trianglearea(a,b,c)<<endl;
    return 0;
}