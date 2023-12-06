#include <bits/stdc++.h>
using namespace std;
// Сортирање такмичара 
// https://petlja.org/biblioteka/r/Zbirka2/sortiranje_takmicara


// koristi se torka/tuple
// moze i za vise od dva elementa


int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n; cin >> n; // broj takmicara

    vector< tuple<int, string> >t(n); // u vektor ide par.

    for(int i = 0; i < n; i++){
        string ime; cin >> ime; // Maja
        int poeni; cin >> poeni;// 56
        //t[i] = make_pair(poeni, ime); (56, Maja)
        //t[i] = make_tuple(-poeni, ime); //(-56, Maja) zbog sorta *(-1)
        t[i] = {-poeni, ime};
    } // svi parovi idu u vektor
        
    sort(t.begin(), t.end());

    for(int i = 0; i < n; i++)
        cout << get<1>(t[i]) << ' ' << -get<0>(t[i]) << '\n'; // zbog ispisa


    return 0;
}
