#include <iostream>
#include<map>
using namespace std;
//mapa - uvodni primer, najbrojniji el.
int main() {
    //ios_base...
    int n; cin >> n; // ukupan br. imena
    //  ime   , br. poj. tog imena
    map<string, int>brojpoj; // povezuje ime i br. poj. tog imena
    
    for (int i = 0; i < n; i++) {
        string ime; cin >> ime;
        brojpoj[ime]++; }
    
/* za svako ime je poznat br. poj.

    for ( auto b : brojpoj ) {
        cout << b.first << ' ' << b.second << '\n';  }
   
      */

    int res = 0;
    for ( auto b : brojpoj )
        res = max(res, b.second);
    cout << res;
    return 0; }