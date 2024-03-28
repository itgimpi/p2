#include <bits/stdc++.h>
using namespace std;
// LIS O(n logn)

int main() {
    //ios_base...
    int n; cin >> n;
    vector<int>dp;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        auto it = lower_bound(dp.begin(), dp.end(), x);
        if (it==dp.end()) // ne postoji...
            dp.push_back(x);
        else 
            *it=x;  }
        cout << dp.size();
        
    return 0; }
