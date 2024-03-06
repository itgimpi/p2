#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

// DP using Vector

ull fib(int n, vector<ull>&dp){
    dp[0] = dp[1] = 1;
    for (int i = 2; i <= n; i++) // resi od 2 do n
        dp[i] = dp[i-1] + dp[i-2];
    return dp[n]; }

int main() {
    int n; cin >> n;
    vector<ull>dp(n+1); // vektor za resenja
    cout << fib(n, dp);
    return 0; }
