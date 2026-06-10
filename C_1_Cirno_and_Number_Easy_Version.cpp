#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int a,n;
        cin>>a>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(), arr.end());
        string a1=to_string(a);
        int sz=a1.size();
        string b1 = string(sz, ' '), b2 = string(sz, ' ');
        bool case1_possible = true;
        bool case2_possible = true;
        string s1=to_string(a);
        //case1 a<b
        for(int i=0;i<sz;i++){
            int val=a1[i]-'0';
            int idx=lower_bound(arr.begin(),arr.end(),val)-arr.begin();
            if(idx<n && arr[idx]==val){
                b1[i]=a1[i];
                continue;
            }
            if(idx<n && val<arr[n-1]){
                int next_idx=upper_bound(arr.begin(),arr.end(),val)-arr.begin();
                b1[i]=to_string(arr[next_idx])[0];
                int j=i+1;
                while(j<sz){
                    b1[j]=to_string(arr[0])[0];
                    j++;
                }
                break;
            }else{
                int j = i - 1;
                while (j >= 0) {
                    int prev_val = (b1[j] - '0');
                    int next_idx = upper_bound(arr.begin(), arr.end(), prev_val) - arr.begin();
                    if (next_idx < n) {
                        b1[j] = to_string(arr[next_idx])[0];
                        break;
                    }
                    j--;
                }
                if (j >= 0) {
                    for (int k = j + 1; k < sz; k++) {
                        b1[k] = to_string(arr[0])[0];
                    }
                } else {
                    case1_possible = false;
                }
                break;
            }
        }
        for(int i=0;i<sz;i++){
            int val=a1[i]-'0';
            int idx=lower_bound(arr.begin(),arr.end(),val)-arr.begin();
            if(idx<n && arr[idx]==val){
                b2[i]=a1[i];
                continue;
            }
            if(val>arr[0]){
                int prev_idx=lower_bound(arr.begin(),arr.end(),val)-arr.begin() - 1;
                b2[i]=to_string(arr[prev_idx])[0];
                int j=i+1;
                while(j<sz){
                    b2[j]=to_string(arr[n-1])[0];
                    j++;
                }
                break;
            }else{
                int j = i - 1;
                while (j >= 0) {
                    int prev_val = (b2[j] - '0');
                    int prev_idx = lower_bound(arr.begin(), arr.end(), prev_val) - arr.begin() - 1;
                    if (prev_idx >= 0) {
                        b2[j] = to_string(arr[prev_idx])[0];
                        break;
                    }
                    j--;
                }
                if (j >= 0) {
                    for (int k = j + 1; k < sz; k++) {
                        b2[k] = to_string(arr[n - 1])[0];
                    }
                } else {
                    case2_possible = false;
                }
                break; 
            }
        }

        int val_b1 = -1, val_b2 = -1;
        if (case1_possible) {
            val_b1 = stoll(b1);
        } else {
            string temp = "";
            int first_idx = (arr[0] == 0 && n > 1) ? 1 : 0;
            temp += to_string(arr[first_idx]);
            for (int i = 0; i < sz; i++) temp += to_string(arr[0]);
            val_b1 = stoll(temp);
        }
        if (case2_possible && b2[0] != '0') {
            val_b2 = stoll(b2);
        } else {
            if (sz > 1) {
                string temp = "";
                for (int i = 0; i < sz - 1; i++) temp += to_string(arr[n - 1]);
                val_b2 = stoll(temp);
            }
        }
        int ans;
        if (val_b2 == -1) {
            ans = val_b1;
        } else if (abs(val_b1 - a) < abs(a - val_b2)) {
            ans = val_b1;
        } else {
            ans = val_b2;
        }
        cout<<abs(ans-a)<<endl;
    }
    return 0;
}