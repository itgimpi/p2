#include <bits/stdc++.h>
using namespace std;
// edit distance - rec
int dist(const string &s1, const string &s2) {
    int n1 = s1.size(); int n2 = s2.size();
    vector<vector<int>>dp(n1+1);
    for (int i = 0; i <= n1; i++) dp[i].resize(n2+1);
    // BC
    dp[0][0]=0;
    for (int i = 0; i <= n1; i++) dp[i][0] = i;
    for (int i = 0; i <= n2; i++) dp[0][i] = i;

    for (int i = 1; i <= n1; i++) 
        for (int j = 1; j <= n2; j++) {
            if (s1[i-1]==s2[j-1])
                dp[i][j] = dp[i-1][j-1];
            else {
                int r1 = dp[i-1][j] + 1;
                int r2 = dp[i][j-1] + 1;
                int r3 = dp[i-1][j-1] + 1; 
                dp[i][j]=min({r1,r2,r3});       
            }
            
        }



    return dp[n1][n2]; }

int main() {
    string s1, s2; cin >> s1 >> s2;
    cout << dist(s1, s2) << endl;

    return 0; }
