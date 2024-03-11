#include <bits/stdc++.h>
using namespace std;
// obilazak zadrice

int resi(const vector<vector<int>>&zad){
    int n = zad.size();
    vector<vector<int>>dp(n);
    for (int i = 0; i < n; i++) dp.resize(n); // matrica za resenja
    dp[0][0] = zad[0][0];
    for (int r = 1; r < n; r++)    //prva kolona
        dp[r][0] = dp[r-1][0] + zad[r][0];
    for (int k = 1; k < n; k++) // prvi red
        dp[0][k] = dp[0][k-1] + zad[0][k];

    for ( int r = 1; r < n; r++ )
        for ( int k = 1; k < n; k++ )
            dp[r][k] = max(dp[r][k-1], dp[r-1][k]) + zad[r][k];

    return dp[n-1][n-1];


}

int main() {
    int n; cin >> n;
    vector<vector<int>>zad(n); // 2d vektor za resenja
    for (int i = 0; i < n; i++) {
        zad[i].resize(n);
        for (int j = 0; j < n; j++)
            cin >> zad[i][j]; }

    cout << resi(zad);
    return 0; }
