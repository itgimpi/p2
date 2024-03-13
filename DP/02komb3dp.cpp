#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
// Br. komb. (bez pon.) DP, време О(nk), mem O(k)

ull komb( int n, int k){
    vector<ull>dp(k+1);
    dp[0]=1;

    for (int nn = 1; nn <= n; nn++) {
        if (nn<=k) dp[nn]=1; // n nad n je 1
        for (int kk = min(k, nn-1);kk>0; kk--)
            dp[kk] += dp[kk-1];    }
    return dp[k]; }

int main() {
    int n, k; cin >> n >> k;
    cout << komb(n, k);
    return 0; }
