#include<bits/stdc++.h> // ZC rek
using namespace std;

int drugi(int p, int d, int n){ // br.poena prvog, br. poena drugog, dim. problema
    if (n == 0) return d;

    int poeni; cin >> poeni;
    if ( poeni > p ) // br. poena je veci od prvog
        return drugi( poeni, p, n - 1);
    if ( poeni > d) // br. poena je veci od drugog
        return drugi( p, poeni, n - 1);
    return drugi( p, d, n - 1);  // br. poena nije veci ni od prvog ni od drugog
    

}

int main() {
    int n; cin >> n;
    cout << drugi( -1, -1, n); // prvi, drugi, n
    return 0; }