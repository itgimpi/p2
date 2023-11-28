#include <bits/stdc++.h>
using namespace std;
// sjajne partije, https://petlja.org/biblioteka/r/Zbirka2/serija_sjajnih_partija

// VO(n), MO(1)

int main() {
    int p; cin >> p; // potreban br. poena
    int k; cin >> k; // potrebna duzina niza
    int n; cin >> n; // broj utakmica
    
    int duzina = 0;
    bool kraj = false;

    for (int i = 0; i < n && (!kraj); i++) { // do kraja niza I nije kraj
        int poeni; cin >> poeni;
        if (poeni >= p) // br poena je u redu
            duzina++;
        else { // manje nego sto treba
            if ( duzina >= k )
                kraj = true; // kraj za petlju
            else duzina = 0;   }   }
        

    if (duzina>=k) cout << "da";
    else cout << "ne";


    return 0;
}