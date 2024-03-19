#include <bits/stdc++.h>
using namespace std;

const int INF = 10000;

// najmanji broj novčića potreban da se naplati iznos S
// kada su nam na raspolaganju n vrednosti novčića datih u nizu v
int resi(const vector<int>&nov, int iznos) {
    if (iznos < 0) return INF;
    if (iznos == 0) return 0;

    int res = INF;
    for (auto n : nov)
        res = min(res, resi(nov, iznos - n) + 1);
    return res; }     // vraća rezultat

int main() {
    int iznos; cin >> iznos;     // iznos i nov
    int n; cin >> n;
    vector<int>nov(n);
    for(int i = 0; i < n; i++)
    	cin >> nov[i];
    // izračunavamo i ispisujemo minimum
    int br = resi(nov, iznos);
    // cout << (br == INF ? -1 : br) << endl;
    if (br==INF) cout << -1;
    else cout << br;
    return 0;   }