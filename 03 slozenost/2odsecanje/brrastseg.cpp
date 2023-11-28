#include <bits/stdc++.h>
using namespace std;
// Број растућих сегмената, https://petlja.org/biblioteka/r/Zbirka2/broj_rastucih_segmenata

// VO(n), MO(1)

int main() {
    int n; cin >> n; // broj elemenata
    
    int preth; cin >> preth; // prvi el je preth za drugi
    int res = 0;
    int duz = 1;

    for (int i = 1; i < n; i++) { // unos od drugog
        int tren; cin >> tren;

        if ( tren > preth )  // niz rast. el. se nastavlja
            duz++; 

        else { // niz rast. el se prekida
            res += duz * (duz - 1) / 2;
            duz = 1;         }
        preth = tren;   }
        
    res += duz * (duz - 1) / 2; // zadnji podniz

    cout << res;

    return 0; }