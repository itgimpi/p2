#include <bits/stdc++.h>
using namespace std;
// Eci peci pec...

int j2(int n) { // n je 41
    int p = 0;
    int nn = n;
    while (nn!=0) {
        p++;
        nn>>=1; }
    p--;
    int m = 1<<p; // maska, 32
    n ^= m; // 41-32=9
    n <<= 1; // 9x2=18
    n |= 1; // 18+1=19
    return n; }





int j(int n, int k) {
    if (n==1) return 0;
    return (j(n-1, k) + k) % n;}

int jdp(int n, int k){
    vector<int>dp(n+1);
    dp[1]=0;
    for (int i = 2; i <= n; i++) {
        dp[i] = (dp[i-1] + k) % i;
    }
    return dp[n];
}


int main() {
    //int n; cin >> n;
    //cout << j2(n) << endl;
    int nn, kk; cin >> nn >> kk;
    //cout << j(nn, kk) + 1 << endl;
    cout << jdp(nn, kk) + 1;
    return 0; }
