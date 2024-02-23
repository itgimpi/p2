#include <bits/stdc++.h>
using namespace std;
//mapa - racuni
int main() {
    //ios_base...
    int q, n; cin >> q >> n; // ukupan br. imena
    //  ime   , br. poj. tog imena
    map<string,int>racuni; // povezuje imena i stanja
    map<int, int>broj; // povezuje stanje i br. poj.

    broj[0] = n; // pre pocetka, sve su nule
    
    for (int i = 0; i < q; i++) { // svi upiti
        string ime; int iznos; cin >> ime >> iznos;
        if (ime=="upit") // upit
            cout << broj[iznos];
        else {// samo unos (ime, iznos)
            broj[racuni[ime]]--; // azurira trenutni br. poj.
            racuni[ime]+=iznos;  // azurira racun
            broj[racuni[ime]]++;// azurira novi br. poj.
        } }
    

    return 0; }