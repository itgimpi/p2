#include <bits/stdc++.h>
using namespace std;
// Knapsack 0/1 DP solution

int ranac(int m[], int v[], int k, int n) {
    vector<vector<int>>dp(n+1, vector<int>(k+1));
    for (int nn = 0; nn <= n; nn++) { // br. pred. je 0, 1, 2, ...
        for (int kk = 0; kk <= k; kk++) { // moguci kapaciteti su 0, 1, 2, ...
            if ( nn == 0 || kk == 0 ) 
                dp[nn][kk] = 0;
            else if ( m[nn-1] <= kk )  // ako pred. ima smisla da ucestvuje...
                dp[nn][kk] = max(
                    dp[nn-1][kk],
                    dp[nn-1][kk-m[nn-1]] + v[nn-1] ); } }

    for (int nn = 0; nn <= n; nn++) { 
        for (int kk = 0; kk <= k; kk++) 
            cout << dp[nn][kk] << ' ';
        cout << endl;  }   
    return dp[n][k]; }






int main() {
    //ios_base...
    //           0   1   2
    int vre[] = {6, 10, 12}; // vrednosti, vectors
    int mas[] = {1, 2, 3};   // mase, zapremine, vectors
    int kap = 5;             // kapacitet ranca
    int n = 3;               // br. pred.

    cout << ranac(mas, vre, kap, n);

    return 0; }
