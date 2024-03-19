#include <bits/stdc++.h>
using namespace std;

const int INF = 9999;

// najmanji broj novčića potreban da se naplati iznos S
// kada su nam na raspolaganju n vrednosti novčića datih u nizu v
int resi(const vector<int>&nov, vector<int>&dp, int iznos) {
    dp[0] = 0; // za iznos 0, 0 novcica
    for (int i = 1; i <= dp.size(); i++) {
        dp[i] = INF;
        for (auto n : nov) 
            if (i - n >= 0)
                dp[i] = min(dp[i], dp[i-n]+1); }
    return dp[iznos]; }     // vraća rezultat

int main() {
    int iznos; cin >> iznos;     // iznos i nov
    int n; cin >> n;
    vector<int>nov(n);
    for(int i = 0; i < n; i++)
    	cin >> nov[i];
    vector<int>dp(iznos+1); 
    int br = resi(nov, dp, iznos);
    cout << (br == INF ? -1 : br) << endl;
    return 0;   }