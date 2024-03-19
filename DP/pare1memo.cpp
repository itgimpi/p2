#include <bits/stdc++.h>
using namespace std;

const int INF = 10000;

// najmanji broj novčića potreban da se naplati iznos S
// kada su nam na raspolaganju n vrednosti novčića datih u nizu v
int resi(const vector<int>&nov, vector<bool>&reseno, vector<int>&memo, int iznos) {
    if (iznos < 0) return INF;
    if (iznos == 0) return 0;
    if (reseno[iznos]) return memo[iznos];
    int res = INF;
    for (auto n : nov)
        res = min(res, resi(nov, reseno, memo, iznos - n)+1);
    memo[iznos] = res;
    reseno[iznos] = true;
    return res;     }     // vraća rezultat

int main() {
    int iznos; cin >> iznos;     // iznos i nov
    int n; cin >> n;
    vector<int>nov(n);
    for(int i = 0; i < n; i++)
    	cin >> nov[i];
    vector<bool>reseno(iznos+1, false); 
    vector<int>memo(iznos+1);
    int br = resi(nov, reseno, memo, iznos);
    cout << (br == INF ? -1 : br) << endl;
    return 0;   }