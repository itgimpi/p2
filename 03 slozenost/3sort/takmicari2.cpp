#include <bits/stdc++.h>
using namespace std;
// Сортирање такмичара 
// https://petlja.org/biblioteka/r/Zbirka2/sortiranje_takmicara

struct takmi {
    string ime;
    int poeni; } ;

bool f ( const takmi &t1, const takmi &t2 ) { // 
    if (t1.poeni > t2.poeni) 
        return true; // ne treba SWAP
    if (t1.poeni < t2.poeni)
        return false; // treba SWAP
    return t1.ime < t2.ime;   // t1 i t2 imaju isti br. poena  
    }



int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n; cin >> n; // broj takmicara

    vector<takmi>t(n); // u vektor ide struktura tak.

    for(int i = 0; i < n; i++) // svi tak. idu u vektor
        cin >> t[i].ime >> t[i].poeni;

    sort(t.begin(), t.end(), 
        []( const takmi &t1, const takmi &t2 ) { // 
    if (t1.poeni > t2.poeni) 
        return true; // ne treba SWAP
    if (t1.poeni < t2.poeni)
        return false; // treba SWAP
    return t1.ime < t2.ime;   // t1 i t2 imaju isti br. poena  
    } );   // O( n log n )

 
// f prvo poredi poene...
// poredi 2 takmicara...
// prvo po poenima
// ako prvi ima > od drugog OK
// ako prvi ima < od drugog NOK
// bez ispitivanja imaju isto...
// onda po abcd...
// ako prvi ima manje ime, vrati T
// inace F


    for(int i = 0; i < n; i++)
        cout << t[i].ime << ' ' << t[i].poeni << '\n';


    return 0;
}
