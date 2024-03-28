#include <bits/stdc++.h>
using namespace std;
// LIS O(nn)

int lis(const vector<int>&a){
    int n = a.size();
    vector<int>dp(n);
    for (int d = 0; d < n; d++) {
        dp[d] = 1;
        for (int l = 0; l < d; l++) {
            if (a[l] < a[d] && dp[l] + 1 > dp[d])
                dp[d]=dp[l] + 1; } }

    int res = dp[0];
    for (int i = 0; i < n; i++)
        if (dp[i]>res)
            res = dp[i];
    return res; }

int main() {
    //ios_base...
    int n; cin >> n;
    vector<int>a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << lis(a);
    return 0; }
