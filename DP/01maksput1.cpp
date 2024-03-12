#include <bits/stdc++.h>
using namespace std;
// obilazak matrice

vector<vector<int>> resi(const vector<vector<int>>&mat){
    int n = mat.size();
    vector<vector<int>>dp(n);
    for (int i = 0; i < n; i++) dp[i].resize(n);
    dp[0][0] = mat[0][0];
    for(int r = 1; r < n; r++) // prva kolone
        dp[r][0] = dp[r-1][0] + mat[r][0];
    for(int k = 1; k < n; k++) // prvi red
        dp[0][k]=dp[0][k-1] + mat[0][k];
    for (int r=1; r<n; r++)
        for(int k=1; k<n; k++)
            dp[r][k] = max(dp[r-1][k], dp[r][k-1]) + mat[r][k];
    return dp; }

void ispis(int r, int k, const vector<vector<int>>&dp){
    if ( r == 0 && k == 0 ) return; // BC, kraj?
    if ( r == 0 ) { //prvi red?
        ispis(r, k-1, dp);
        cout << "desno" << endl;  }
    else if ( k == 0 ) { //prva kolona?
        ispis(r-1, k, dp);
        cout << "dole" << endl;  }
    else
        if ( dp[r-1][k] > dp[r][k-1] ) { // 
            ispis(r-1,k,dp);
            cout << "dole" << endl;         }
        else {
            ispis(r,k-1,dp);
            cout << "desno" << endl; 
        } }

int main() {
    int n; cin >> n;
    vector<vector<int>>mat(n); // 2d vektor za resenja
    for (int i = 0; i < n; i++) {
        mat[i].resize(n);
        for (int j = 0; j < n; j++)
            cin >> mat[i][j]; }

    vector<vector<int>>dp = resi(mat);
    cout << dp[n-1][n-1] << endl;
    ispis(n-1, n-1, dp);
    return 0; }
