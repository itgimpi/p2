#include <bits/stdc++.h>
using namespace std;
// Исплата са најмање новчића
const INF = 1000000000;
int resi(const vector<int>&nov, vector<int>&dp, int iznos){
    dp[0]=0;
    for ( int i = 1; i < dp.size(); i++ ) {
        dp[i]=INF;
        for (auto n : nov)
            if (iznos-n >= 0)
                dp[i]=min(dp[i], dp[iznos-n]+1);
    } 
    return dp[iznos];
}

int main() {
    int iznos, n; cin >> iznos >> n;
    vector<int>nov(n);
    for (int i = 0; i < n; i++) cin >> nov[i];
    vector<int>dp(iznos+1);
    int bn = resi(nov, dp, iznos);
    if (bn==1000000000) cout << -1;
    else cout << bn;
    return 0; }
