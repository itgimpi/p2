#include <bits/stdc++.h>
using namespace std;
// Исплата са посебним новчићима
// https://petlja.org/biblioteka/r/Zbirka2/kusur_sa_posebnim_novcicima

int gridi(int iznos){
    int res = 0;
    //pare[]=1, 2, 5, 10, 20, 50, 100, 200, 500, 1000, 2000 и 5000
    vector<int>pare {5000, 2000, 1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};


    while (iznos>0) {
        for ( auto p : pare ) { 
            res += iznos / p;
            iznos = iznos % p; }}

    return res;

}

int main() {
    //ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int iznos; cin >> iznos;

    cout << gridi(iznos);

    return 0; }
