#include <bits/stdc++.h>
using namespace std;
    bool notprime(int n) {
        if (n <= 1) return false;
        if(n==2||n==3)return false;
        for (int i = 2; i * i <= n; i += 2)
            if (n % i == 0) return true;
        return false;
    }
    bool completePrime(int num) {
        if (num <= 0) return false;
        int k = num;
        bool ans=true;
        long long p = 1;    
        while (p < num) {
            int suffix = num % (p * 10); 
            if (notprime(suffix)) {
                ans= false;
                return false;
            }
            p *= 10;
        }
        while (k > 0) {
            if (notprime(k)) {
                ans=false;
                return false;
            }
            k /= 10;
        }
        return ans;
    }
    int main(){
        int num=39;
        cout<<completePrime(num)<<endl;
    return 0;
}

