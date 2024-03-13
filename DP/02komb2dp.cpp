#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
// Br. komb. (bez pon.) DP, време О(nk), mem O(nk)

ull komb( int n, int k ){
    vector<vector<ull>>dp(n+1);
    for ( int nn = 0; nn <= n; nn++ )
        dp[nn].resize(min(nn+1, k+1));
    for (int nn = 0; nn <= n; nn++) {
        dp[nn][0] = 1;
        for (int kk = 1; kk <= min(k, nn-1); kk++)
            dp[nn][kk] = dp[nn-1][kk]+dp[nn-1][kk-1];
        if (nn<=k) dp[nn][nn]=1;     }
    return dp[n][k];
}

int main() {
    int n, k; cin >> n >> k;
    cout << komb(n, k);
    return 0; }
