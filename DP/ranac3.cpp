#include <bits/stdc++.h>
using namespace std;
// Knapsack 0/1 Rec. solution

int ranac(int m[], int v[], int k, int n) {
    vector<vector<int>>dp(n+1, vector<int>(k+1));
    for (int nn = 0; nn <= n; n++) {
        for (int kk = 0; kk <= k; k++) {
            if (nn==0 || kk==0)
                dp[nn][kk]=0;
            else if ( m[nn-1] <= kk ) 
                dp[nn][kk]=max(
                    dp[nn-1][kk], // ne ukljucuje se
                    dp[nn-1][kk-m[nn-1]] + v[nn-1] );  
            else
                dp[nn][kk] = dp[nn-1][kk];     }   }


    return dp[n][k]; }




int main() {
    //ios_base...
    //           0   1   2
    int vre[] = {6, 10, 12}; // vrednosti, vectors
    int mas[] = {1, 2, 3};   // mase, zapremine, vectors
    int kap = 50;             // kapacitet ranca
    int n = 3;               // br. pred.

    cout << ranac(mas, vre, kap, n);

    return 0; }
