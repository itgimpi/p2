#include <bits/stdc++.h>
using namespace std;
// Исплата са најмање новчића

int resi(const vector<int>&nov, int iznos){
    if (iznos==0) return 0;
    if (iznos<0) return 1000000000;
    int res = 1000000000; // INF
    for ( auto n : nov ) { // za sve moguce novcice
        res = min(res, resi(nov, iznos - n) + 1);    }
    return res; 
    
}

int main() {
    int iznos, n; cin >> iznos >> n;
    vector<int>nov(n);
    for (int i = 0; i < n; i++) cin >> nov[i];
    int bn = resi(nov, iznos);
    if (bn==1000000000) cout << -1;
    else cout << bn;
    return 0; }
