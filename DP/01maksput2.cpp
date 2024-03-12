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

void ispis(const vector<vector<int>>&dp, int n){
    stack<string>put;
    int r = n-1, k= n-1;
    while ( r > 0 || k > 0 ) { // jedan nije prvi
        if (r==0) { // prvi red?
            k--;
            put.push("desno");  }
        else if (k==0) { // prva kol.?
            r--;
            put.push("dole");  }
        else
            if (dp[r-1][k]>dp[r][k-1]){
                r--;
                put.push("dole");        }
            else {
                k--;
                put.push("desno");            
            }  }
    while (!put.empty()){
        cout << put.top() << endl;
        put.pop();
    }
        }

int main() {
    int n; cin >> n;
    vector<vector<int>>mat(n); // 2d vektor za resenja
    for (int i = 0; i < n; i++) {
        mat[i].resize(n);
        for (int j = 0; j < n; j++)
            cin >> mat[i][j]; }

    vector<vector<int>>dp = resi(mat);
    cout << dp[n-1][n-1] << endl;
    ispis(dp, n);
    return 0; }
